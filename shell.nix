
{ pkgs ? import <nixpkgs> {} } :
with pkgs;
mkShell {
    nativeBuidInputs = [
      cmake
    ];

    buildInputs = [
      qt5.qtbase
      
    ];
}
