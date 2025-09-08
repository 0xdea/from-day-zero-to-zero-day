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

### Patch libredwg to remove CRC and sentinel checks and start fuzzing again

```
% cd libredwg
% cp ../remove_crc_sentinel.patch .
% patch -p1 < remove_crc_sentinel.patch
% docker run -ti -v /Users/raptor/Research/from-day-zero-to-zero-day/chapter-08/aflplusplus-libredwg/libredwg:/src aflplusplus/aflplusplus
$ cd /src
$ make clean
$ make -C src
$ make -C programs dwgread
$ mv fuzz-out fuzz-out-1
$ afl-fuzz -i fuzz-in -o fuzz-out -- programs/dwgread @@
```

### Triage crashes

```
[AFL++ 27458ad91b7b] /src # gdb --args ./programs/dwgread crash-1.dwg
(gdb) r
Starting program: /src/programs/dwgread crash-1.dwg
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/aarch64-linux-gnu/libthread_db.so.1".

Program received signal SIGSEGV, Segmentation fault.
decode_preR13_auxheader (dat=0xffffffffde50, dwg=0xffffffffe020) at decode.c:6278
6278	  crcc = bit_calc_CRC (
(gdb) bt
#0  decode_preR13_auxheader (dat=0xffffffffde50, dwg=0xffffffffe020) at decode.c:6278
#1  0x0000aaaaaac93c04 in decode_preR13 (dat=0xffffffffde50, dwg=0xffffffffe020) at decode_r11.c:786
#2  0x0000aaaaaab1fb00 in dwg_decode (dat=0xffffffffde50, dwg=0xffffffffe020) at /src/src/decode.c:217
#3  dwg_read_file (filename=<optimized out>, dwg=0xffffffffe020) at dwg.c:261
#4  0x0000aaaaaab1aac0 in main (argc=2, argv=0xfffffffff5a8) at dwgread.c:256
(gdb)

...

[AFL++ 27458ad91b7b] /src # gdb --args ./programs/dwgread crash-2.dwg
(gdb) r
Starting program: /src/programs/dwgread crash-2.dwg
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/aarch64-linux-gnu/libthread_db.so.1".

Program received signal SIGSEGV, Segmentation fault.
0x0000aaaaaaca1cd0 in read_data_section (sec_dat=0xffffffffd900, dat=0xffffffffde50, sections_map=<optimized out>, pages_map=<optimized out>, sec_type=<optimized out>) at decode_r2007.c:840
840	      r2007_section_page *section_page = section->pages[i];
(gdb) bt
#0  0x0000aaaaaaca1cd0 in read_data_section (sec_dat=0xffffffffd900, dat=0xffffffffde50, sections_map=<optimized out>,
    pages_map=<optimized out>, sec_type=<optimized out>) at decode_r2007.c:840
#1  0x0000aaaaaac9e324 in read_2007_section_revhistory (dat=0xffffffffde50, dwg=0xffffffffe020, sections_map=0xaaaaaafa9fc0,
    pages_map=0xaaaaaafaa8e0) at decode_r2007.c:2023
#2  read_r2007_meta_data (dat=<optimized out>, hdl_dat=<optimized out>, dwg=<optimized out>) at decode_r2007.c:2466
#3  0x0000aaaaaab4a308 in decode_R2007 (dat=0xffffffffde50, dwg=0xffffffffe020) at decode.c:3469
#4  0x0000aaaaaab1fc60 in dwg_decode (dat=0xffffffffde50, dwg=0xffffffffe020) at /src/src/decode.c:227
#5  dwg_read_file (filename=<optimized out>, dwg=0xffffffffe020) at dwg.c:261
#6  0x0000aaaaaab1aac0 in main (argc=2, argv=0xfffffffff5a8) at dwgread.c:256
(gdb)
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
