#!/bin/sh
srcdir="."
top_builddir="."
# dummy to please shellcheck
test -z "$top_builddir" && echo $top_builddir

for d in "$srcdir"/test/test-data/*.dwg "$srcdir"/test/test-data/*/*.dwg; do
    INPUT="$d"  test/unit-testing/dynapi_test || echo "$d"
done
