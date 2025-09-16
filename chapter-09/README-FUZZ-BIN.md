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
```

### Frida mode - Fuzzing libredwg from a binary-only perspective

*TBD*

*Note: See also chapter 9*
