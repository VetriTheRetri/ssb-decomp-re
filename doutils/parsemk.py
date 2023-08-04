''' Parse compiler generated Makefile .d dependcies into
    a Python dict of Path(Target) => sorted list[Path(Dependencies)]
'''

from enum import Enum, auto
from pathlib import Path

class _Parse(Enum):
    FIND_DEP = auto()
    CONTINUE = auto()

class _TargetsDeps():
    def __init__(self, targets, deps=[]):
        self.targets = [Path(s) for s in targets]
        self.deps = [Path(s) for s in deps]
    
    def extend_deps(self, more_deps):
        self.deps.extend([Path(s) for s in more_deps])

class _ParseMkDeps():
    def __init__(self, file):
        self.lines = file.readlines()
        self.state = _Parse.FIND_DEP

    def _lex_line(self, store, line):
        if self.state == _Parse.FIND_DEP:
            (tars, sep, deps) = line.partition(":")
            if sep == "" and deps == "":
                # No dependencies, probably empty line
                return _Parse.FIND_DEP
            
            targets = tars.split()
            deps = deps.split()

            if len(deps) == 0:
                # No dependencies for this target
                return _Parse.FIND_DEP
            
            if deps[-1] == "\\":
                # this line continues to next line
                deps.pop()
                next_state = _Parse.CONTINUE
            else:
                next_state = _Parse.FIND_DEP
            
            store.append(_TargetsDeps(targets, deps))
            return next_state
        elif self.state == _Parse.CONTINUE:
            more_deps = line.strip().split()
            prior = store[-1]

            if len(more_deps) == 0:
                # Line continued, but no more deps listed
                return _Parse.FIND_DEP

            if more_deps[-1] == "\\":
                # Line continues to continue
                more_deps.pop()
                next_state = _Parse.CONTINUE
            else:
                next_state = _Parse.FIND_DEP
            
            prior.extend_deps(more_deps)
            return next_state
        else:
            raise Exception(f"Unknown parse state {self.state}")
    
    def _combine_lexed(store, symbols):
        ''' return dict<'target' => set<dependencies>> '''
        output = dict()
        for tardeps in symbols:
            # targets.deps should be > 0
                
            for target in tardeps.targets:
                # grab only dependants that exist 
                # e.g., get rid of deleted dependancies
                deps = set(filter(lambda p: p.exists(), tardeps.deps))
                if target not in output:
                    output[target] = deps
                else:
                    output[target] |= deps
            
                # Include this target's dependencies in other targets
                # that depend on this target
                for other_target in output:
                    if target == other_target:
                        continue
                    other_deps = output[other_target]
                    if target in other_deps:
                        other_deps |= deps
        
        return output
    
    def _deps_to_sorted_list(self, parsed):
        for target in parsed:
            parsed[target] = sorted(parsed[target])
        
        return parsed
    
    def parse(self):
        symbols = []
        for line in self.lines:
            self.state = self._lex_line(symbols, line)
        
        return self._deps_to_sorted_list(self._combine_lexed(symbols))


def parse_mk_dependencies(path):
    ''' Parse a Makefile dependencies .d file into
        a dict of target to a sorted list of dependencies

        If `path` is not a file, None is returned
    '''
    try:
        with open(path, "r") as f:
            return _ParseMkDeps(f).parse()
    except FileNotFoundError:
        return None
