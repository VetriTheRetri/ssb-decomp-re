let
  upstream-nixpkgs = fetchTarball {
    url = "https://github.com/nixos/nixpkgs/archive/308735f3c5155eb256f2bbb0f0e6d9574db3ef7b.tar.gz";
    sha256 = "0gn2bq7k6fqw41ab2d066nmkvwrr84caaqdrfwsqlw24my2sai12";
  };

  patched-nixpkgs = (import upstream-nixpkgs {}).srcOnly {
    name = "patched-nixpkgs";
    src = upstream-nixpkgs;
    patches = [
      ./mips-embedded-platform.patch
    ];
  };

in

with (import patched-nixpkgs {});

gccMultiStdenv.mkDerivation rec {
  name = "ssb-decomp";
  src = lib.cleanSource ./.;

  nativeBuildInputs = [
    doit
    pkgsCross.mips-embedded.stdenv.cc.bintools.bintools
    pkg-config
    capstone
    cargo
  ];
}
