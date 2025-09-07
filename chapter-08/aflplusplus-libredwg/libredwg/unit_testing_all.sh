#!/bin/sh
srcdir="."
top_builddir="."
# dummy to please shellcheck, needed for LTEXEC
test -z "$top_builddir" && echo $top_builddir

cd test/unit-testing || exit
list="$(make -s list)"
# shellcheck disable=SC2086
make -s -j4 $list
cd - || exit

for t in $list; do
    echo "$t"
    # -a for all (no max 6), -n for no coverage checks
     "test/unit-testing/$t" -an "$srcdir/test/test-data/"
     "test/unit-testing/$t" -an "$srcdir/test/test-big/"
     "test/unit-testing/$t" -an "$srcdir/test/test-old/"
done
