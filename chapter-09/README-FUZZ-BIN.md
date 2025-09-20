# Example AFL++ binary-only fuzzing sessions

## Linux

### QEMU mode - Fuzzing NConvert

```
$ wget https://download.xnview.com/old_versions/NConvert/NConvert-7.155-linux64.tgz
$ tar xvf NConvert-7.155-linux64.tgz
$ git clone https://github.com/libsdl-org/libtiff
$ mkdir NConvert/fuzz-in
$ cp libtiff/test/images/*.tiff NConvert/fuzz-in/
$ echo core | sudo tee /proc/sys/kernel/core_pattern
$ afl-fuzz -c nconvert -Q -i fuzz-in -o fuzz-out -- ./nconvert -out tiff @@
...
$ ./nconvert -out tiff fuzz-out/default/crashes/id\:000000\,sig\:06\,src\:000017\,time\:502812\,execs\:44717\,op\:arith8\,pos\:26650\,val\:+19
** NCONVERT v7.155 (c) 1991-2023 Pierre-E Gougelet (Sep  8 2023/13:54:44) **
        Version for Linux x86 (X11)  (All rights reserved)
** This is freeware software (for non-commercial use)

double free or corruption (!prev)
Aborted
```

## macOS

### Frida mode - Fuzzing libredwg from a binary-only perspective

```
% git clone https://github.com/LibreDWG/libredwg.git
% cd libredwg
% git checkout 77a8562
% cp -r ../../../chapter-08/aflplusplus-libredwg/libredwg/fuzz-in-cmin .
% docker run -ti -v /Users/raptor/Research/from-day-zero-to-zero-day/chapter-09/aflplusplus-frida/libredwg:/src aflplusplus/aflplusplus
[AFL++ d0cab7325ce4] /AFLplusplus # cd /src
[AFL++ d0cab7325ce4] /src # sh ./autogen.sh
[AFL++ d0cab7325ce4] /src # ./configure --disable-bindings --disable-dxf --disable-json --disable-shared
[AFL++ d0cab7325ce4] /src # make -C src && make -C programs dwgread
[AFL++ d0cab7325ce4] /src # afl-fuzz -O -i fuzz-in-cmin -o fuzz-out -- programs/dwgread @@
...
[+] Injecting /usr/local/lib/afl/afl-frida-trace.so ...
...
```

*Note: See also chapter 9 for other Linux examples*
