{
  cmake,
  stdenv,
  qt5
}:

stdenv.mkDerivation rec {

  name = "qtbar";

  src = ./.;

  nativeBuildInputs = [ cmake ];

  dontWrapQtApps = true;

  buildInputs = [ qt5.qtbase ];
}
