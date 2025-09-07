# Example AFL++ fuzzing session

## macOS

### Install AFL++ docker image

```
% sw_vers
ProductName: macOS
ProductVersion: 15.5
BuildVersion: 24F74
% docker pull aflplusplus/aflplusplus
```

### Start fuzzing libredwg

```
% git clone https://github.com/LibreDWG/libredwg
% cd libredwg
% git checkout 77a8562
% docker run -ti -v /Users/raptor/Research/from-day-zero-to-zero-day/chapter-08/aflplusplus-libredwg/libredwg:/src aflplusplus/aflplusplus
[AFL++ 27458ad91b7b] /AFLplusplus # cd /src/
[AFL++ 27458ad91b7b] /src # sh autogen.sh
[AFL++ 27458ad91b7b] /src # CC=afl-clang-lto ./configure --disable-bindings --disable-dxf --disable-json --disable-shared
[AFL++ 27458ad91b7b] /src # make -C src
[AFL++ 27458ad91b7b] /src # make -C programs dwgread
[AFL++ 27458ad91b7b] /src # mkdir fuzz-in
[AFL++ 27458ad91b7b] /src # cp test/test-data/example_2000.dwg fuzz-in/
[AFL++ 27458ad91b7b] /src # afl-fuzz -i fuzz-in -o fuzz-out -- programs/dwgread @@
```

## Linux

### Compile and install AFL++

```
$ grep PRETTY /etc/os-release
PRETTY_NAME="Ubuntu 24.04.3 LTS"
$ sudo apt update
$ sudo apt install -y build-essential python3-dev automake cmake git flex bison libglib2.0-dev libpixman-1-dev python3-setuptools cargo libgtk-3-dev
$ sudo apt install -y lld llvm llvm-dev clang
$ GCC_VER=$(gcc --version|head -n1|sed 's/\..*//'|sed 's/.* //')
$ sudo apt install -y gcc-$GCC_VER-plugin-dev libstdc++-$GCC_VER-dev
$ sudo apt install -y ninja-build
$ wget https://github.com/AFLplusplus/AFLplusplus/archive/refs/tags/v4.33c.tar.gz
$ tar xvf v4.33c.tar.gz
$ cd AFLplusplus-4.33c/
$ make distrib
$ sudo make install
```

### Start fuzzing libredwg

```
$ sudo apt-get install -y autoconf automake libtool pkg-config m4
$ git clone https://github.com/LibreDWG/libredwg
$ cd libredwg
$ git checkout 77a8562
$ sh autogen.sh
$ CC=afl-clang-lto ./configure --disable-bindings --disable-dxf --disable-json --disable-shared
$ make -C src
$ make -C programs dwgread
$ mkdir fuzz-in
$ cp test/test-data/example_2000.dwg fuzz-in/
$ afl-fuzz -i fuzz-in -o fuzz-out -- programs/dwgread @@
```
