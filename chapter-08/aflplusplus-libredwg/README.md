# Example AFL++ fuzzing session

## In macOS

```
% sw_vers
ProductName: macOS
ProductVersion: 15.5
BuildVersion: 24F74
% docker pull aflplusplus/aflplusplus
% git clone https://github.com/LibreDWG/libredwg
% cd libredwg
% git checkout 77a8562
% docker run -ti -v /Users/raptor/Research/from-day-zero-to-zero-day/chapter-08/aflplusplus-libredwg/libredwg:/src aflplusplus/aflplusplus
```

## In Docker

```
[AFL++ 27458ad91b7b] /AFLplusplus # cd /src/
[AFL++ 27458ad91b7b] /src # sh autogen.sh
[AFL++ 27458ad91b7b] /src # CC=afl-clang-lto ./configure --disable-bindings --disable-dxf --disable-json --disable-shared
[AFL++ 27458ad91b7b] /src # make -C src
[AFL++ 27458ad91b7b] /src # make -C programs dwgread
[AFL++ 27458ad91b7b] /src # mkdir fuzz-in
[AFL++ 27458ad91b7b] /src # cp test/test-data/example_2000.dwg fuzz-in/
[AFL++ 27458ad91b7b] /src # afl-fuzz -i fuzz-in -o fuzz-out -- programs/dwgread @@
```
