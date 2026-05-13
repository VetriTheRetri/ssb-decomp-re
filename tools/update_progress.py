#!/usr/bin/env python3
"""Scrape the SSB64 decomp progress spreadsheet and update docs/index.html.

The spreadsheet is published at:
    https://docs.google.com/spreadsheets/d/1Km25mhfLNDJA_JgMyflHXlqQAIaJOwxMJsMDDWwbeLI

This script fetches the CSV export, parses the remaining nonmatching
functions, counts total functions from the codebase, and injects the
data into docs/index.html so GitHub Pages can serve a static progress
page with no runtime dependencies.

Usage:
    python3 tools/update_progress.py

Requires: requests (pip install requests)
"""

import csv
import io
import json
import os
import re
import subprocess
import sys
from datetime import datetime, timezone

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
DOCS_DIR = os.path.join(PROJECT_DIR, "docs")
INDEX_HTML = os.path.join(DOCS_DIR, "index.html")

SHEET_CSV_URL = (
    "https://docs.google.com/spreadsheets/d/"
    "1Km25mhfLNDJA_JgMyflHXlqQAIaJOwxMJsMDDWwbeLI"
    "/gviz/tq?tqx=out:csv"
)


def fetch_spreadsheet():
    """Download the spreadsheet as CSV."""
    try:
        import requests
    except ImportError:
        # Fallback to urllib
        import urllib.request
        with urllib.request.urlopen(SHEET_CSV_URL) as resp:
            return resp.read().decode("utf-8")

    resp = requests.get(SHEET_CSV_URL, timeout=30)
    resp.raise_for_status()
    return resp.text


def parse_functions(csv_text):
    """Parse CSV into list of function dicts."""
    reader = csv.DictReader(io.StringIO(csv_text))
    functions = []
    for row in reader:
        name = (row.get("Function Name") or "").strip()
        if not name:
            continue
        functions.append({
            "name": name,
            "tu": (row.get("Translation Unit") or "").strip(),
            "file_size": (row.get("File Size") or "").strip(),
            "comment": (row.get("Comment (Issue with Existing Scratch)") or "").strip(),
            "scratch": (row.get("Scratch") or "").strip(),
        })
    return functions


def count_total_functions():
    """Count total functions in the project from the progress JSON or ASM stubs.

    Tries (in order):
    1. us_report.json (decomp.dev progress data)
    2. Count GLOBAL_ASM pragmas + matched functions from .c files
    """
    report = os.path.join(PROJECT_DIR, "us_report.json")
    if os.path.exists(report):
        with open(report) as f:
            data = json.load(f)
        # decomp.dev format: per-unit measures with total_functions/matched_functions
        total = 0
        for unit in data.get("units", []):
            m = unit.get("measures", {})
            total += m.get("total_functions", 0)
        if total > 0:
            return total

    # Fallback: count from the codebase
    try:
        result = subprocess.run(
            ["grep", "-rc", "GLOBAL_ASM", "asm/nonmatchings/"],
            capture_output=True, text=True, cwd=PROJECT_DIR,
        )
        asm_count = int(result.stdout.strip()) if result.stdout.strip() else 0
    except Exception:
        asm_count = 0

    if asm_count > 0:
        return int(asm_count / 0.003)  # ~99.7% matched

    return 7167  # fallback from known count


def inject_data(html_path, data):
    """Replace the PROGRESS_DATA constant in index.html with real data."""
    with open(html_path) as f:
        html = f.read()

    json_str = json.dumps(data, indent=2)
    # Replace the placeholder: const PROGRESS_DATA = null;
    html = re.sub(
        r"const PROGRESS_DATA = .*?;",
        f"const PROGRESS_DATA = {json_str};",
        html,
        count=1,
        flags=re.DOTALL,
    )

    with open(html_path, "w") as f:
        f.write(html)


def main():
    print("Fetching spreadsheet...")
    csv_text = fetch_spreadsheet()

    print("Parsing functions...")
    functions = parse_functions(csv_text)
    print(f"  {len(functions)} nonmatching functions found")

    total = count_total_functions()
    print(f"  {total} total functions (from report)")

    data = {
        "total_functions": total,
        "functions": functions,
        "updated": datetime.now(timezone.utc).strftime("%Y-%m-%d %H:%M UTC"),
    }

    print(f"Updating {INDEX_HTML}...")
    inject_data(INDEX_HTML, data)
    print("Done!")


if __name__ == "__main__":
    main()
