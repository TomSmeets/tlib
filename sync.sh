set -euo pipefail
SRC=$(dirname $(realpath "$0"))
DST=$(realpath "$1")
set -x
unison "$SRC" "$DST" \
  -path src/lib \
  -path src/gfx \
  -path src/build \
  -path .gitignore \
  -path LICENSE.txt \
  -path .clang-format
  # -path build \
  # -path build.bat \
