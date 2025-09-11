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

### Patch libredwg to remove CRC and sentinel checks

```
% cd libredwg
% cp ../remove_crc_sentinel.patch .
% patch -p1 < remove_crc_sentinel.patch
% docker run -ti -v /Users/raptor/Research/from-day-zero-to-zero-day/chapter-08/aflplusplus-libredwg/libredwg:/src aflplusplus/aflplusplus
[AFL++ 27458ad91b7b] /AFLplusplus # cd /src/
[AFL++ 27458ad91b7b] /src #$ make clean
[AFL++ 27458ad91b7b] /src # make -C src
[AFL++ 27458ad91b7b] /src # make -C programs dwgread
[AFL++ 27458ad91b7b] /src #$ mv fuzz-out fuzz-out-1
[AFL++ 27458ad91b7b] /src #$ afl-fuzz -i fuzz-in -o fuzz-out -- programs/dwgread @@
```

### Minimize the seed corpus

```
[AFL++ 27458ad91b7b] /src # mv fuzz-out fuzz-out-2
[AFL++ 27458ad91b7b] /src # afl-cmin -i test/test-data/2007 -o fuzz-in-cmin -- programs/dwgread @@
[AFL++ 27458ad91b7b] afl-fuzz -i fuzz-in-cmin -o fuzz-out -- programs/dwgread @@
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

[AFL++ 27458ad91b7b] /src # gdb --args ./programs/dwgread fuzz-out/default/crashes/id\:000000\,sig\:11\,src\:005382\,time\:2233789\,execs\:1796605\,op\:havoc\,rep\:3
(gdb) r
Starting program: /src/programs/dwgread fuzz-out/default/crashes/id:000000,sig:11,src:005382,time:2233789,execs:1796605,op:havoc,rep:3
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/aarch64-linux-gnu/libthread_db.so.1".

Program received signal SIGSEGV, Segmentation fault.
0x0000aaaaaaca0bbc in read_data_section (sec_dat=0xffffffffd8b0, dat=0xffffffffde00, sections_map=<optimized out>, pages_map=<optimized out>, sec_type=<optimized out>) at decode_r2007.c:840
840	      r2007_section_page *section_page = section->pages[i];
(gdb) bt
#0  0x0000aaaaaaca0bbc in read_data_section (sec_dat=0xffffffffd8b0, dat=0xffffffffde00, sections_map=<optimized out>,
    pages_map=<optimized out>, sec_type=<optimized out>) at decode_r2007.c:840
#1  0x0000aaaaaac9d210 in read_2007_section_revhistory (dat=0xffffffffde00, dwg=0xffffffffdfd0, sections_map=0xaaaaaafa91d0,
    pages_map=0xaaaaaafa9af0) at decode_r2007.c:2023
#2  read_r2007_meta_data (dat=<optimized out>, hdl_dat=<optimized out>, dwg=<optimized out>) at decode_r2007.c:2466
#3  0x0000aaaaaab49b88 in decode_R2007 (dat=0xffffffffde00, dwg=0xffffffffdfd0) at decode.c:3469
#4  0x0000aaaaaab1fa20 in dwg_decode (dat=0xffffffffde00, dwg=0xffffffffdfd0) at /src/src/decode.c:227
#5  dwg_read_file (filename=<optimized out>, dwg=0xffffffffdfd0) at dwg.c:261
#6  0x0000aaaaaab1a880 in main (argc=2, argv=0xfffffffff558) at dwgread.c:256
(gdb)
```

### Ensure that the most promising crash works on a release build

```
$ wget http://ftp.gnu.org/gnu/libredwg/libredwg-0.12.5.tar.gz
$ tar xvfz libredwg-0.12.5.tar.gz
$ ./configure --enable-release
$ make
$ LD_LIBRARY_PATH="./src/.libs:$LD_LIBRARY_PATH" pwndbg --args ./programs/.libs/dwgread /home/raptor/crash-2.dwg
...
pwndbg> r
Starting program: /home/raptor/libredwg-0.12.5/programs/.libs/dwgread /home/raptor/crash-2.dwg

This GDB supports auto-downloading debuginfo from the following URLs:
  <https://debuginfod.ubuntu.com>
Debuginfod has been disabled.
To make this setting permanent, add 'set debuginfod enabled off' to .gdbinit.
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
ERROR: Invalid num_pages 27303540899512437, skip
ERROR: Invalid section->pages[0] size
Warning: Failed to find section_info[1]
ERROR: Failed to read header section
Warning: Failed to find section_info[3]
ERROR: Failed to read class section
Warning: Failed to find section_info[7]
ERROR: Failed to read objects section
Warning: Failed to find section_info[2]
ERROR: Preview overflow 119 + 0 > 27279
Warning: thumbnail.size mismatch: 27279 != 0
ERROR: Invalid product_checksum size 16. Need min. 16 bits, have 65280 for .

Program received signal SIGSEGV, Segmentation fault.
0x00007ffff728cd6c in read_data_section (sec_dat=sec_dat@entry=0x7fffffffca90, dat=dat@entry=0x7fffffffcd90, sections_map=sections_map@entry=0x55555556bfc0, pages_map=pages_map@entry=0x55555556c8e0, sec_type=sec_type@entry=SECTION_REVHISTORY) at decode_r2007.c:805
805	      r2007_section_page *section_page = section->pages[i];
...
 ► 0x7ffff728cd6c <read_data_section+188>    mov    r12, qword ptr [rax]            <Cannot dereference [0]>
   0x7ffff728cd6f <read_data_section+191>    mov    rdx, qword ptr [r12 + 0x10]
   0x7ffff728cd74 <read_data_section+196>    je     read_data_section+1056      <read_data_section+1056>

   0x7ffff728cd7a <read_data_section+202>    mov    qword ptr [rsp + 0x38], rbp
   0x7ffff728cd7f <read_data_section+207>    xor    r13d, r13d                      R13D => 0
   0x7ffff728cd82 <read_data_section+210>    nop    word ptr [rax + rax]
   0x7ffff728cd88 <read_data_section+216>    mov    rax, qword ptr [rsp + 8]
   0x7ffff728cd8d <read_data_section+221>    jmp    read_data_section+237       <read_data_section+237>
    ↓
   0x7ffff728cd9d <read_data_section+237>    cmp    qword ptr [rax], rdx
   0x7ffff728cda0 <read_data_section+240>    jne    read_data_section+224       <read_data_section+224>

   0x7ffff728cda2 <read_data_section+242>    cmp    r15, qword ptr [r12]
...
In file: /home/raptor/libredwg-0.12.5/src/decode_r2007.c:805
   800   sec_dat->version = dat->version;
   801   sec_dat->from_version = dat->from_version;
   802
   803   for (i = 0; i < (int)section->num_pages; i++)
   804     {
 ► 805       r2007_section_page *section_page = section->pages[i];
   806       page = get_page (pages_map, section_page->id);
   807       if (page == NULL)
   808         {
   809           free (decomp);
   810           LOG_ERROR ("Failed to find page %d", (int)section_page->id)
...
 ► 0   0x7ffff728cd6c read_data_section+188
   1   0x7ffff729207a read_2007_section_revhistory+74
   2   0x7ffff72a94c9 read_r2007_meta_data+3081
   3   0x7ffff728aa2e dwg_decode+1758
   4   0x7ffff728aa2e dwg_decode+1758
   5   0x7ffff6e6fcdd dwg_read_file+397
   6   0x5555555556a9 main+1033
   7   0x7ffff6a2a1ca __libc_start_call_main+122
```

### Use AFL++'s persistent mode with a harness

```
% cp libredwg/examples/llvmfuzz.c libredwg/examples/llvmfuzz.c.bak
% cp libredwg/examples/Makefile.am libredwg/examples/Makefile.am.bak
% cp llvmfuzz.c libredwg/examples
% cp Makefile.am libredwg/examples
% docker run -ti -v /Users/raptor/Research/from-day-zero-to-zero-day/chapter-08/aflplusplus-libredwg/libredwg:/src aflplusplus/aflplusplus
[AFL++ 27458ad91b7b] /src # mv fuzz-out/ fuzz-out-cmin
[AFL++ 27458ad91b7b] /src # make clean
[AFL++ 27458ad91b7b] /src # CC=afl-clang-lto ./configure --disable-bindings --disable-dxf --disable-json --disable-shared
[AFL++ 27458ad91b7b] /src # make -C src
[AFL++ 27458ad91b7b] /src # make -C examples llvmfuzz
[AFL++ 27458ad91b7b] /src # afl-fuzz -i fuzz-in-cmin -o fuzz-out -- examples/llvmfuzz
...
[+] Persistent mode binary detected.
[+] Deferred forkserver binary detected.
[*] Scanning 'fuzz-in-cmin'...
[*] Creating hard links for all input files...
[+] Loaded a total of 19 seeds.
[*] Spinning up the fork server...
[+] All right - new fork server model v1 is up.
[*] Target map size: 49801
[*] Using SHARED MEMORY FUZZING feature.
...
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
