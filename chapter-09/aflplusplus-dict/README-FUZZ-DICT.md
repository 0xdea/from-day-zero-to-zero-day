# Example AFL++ dictionary-assisted fuzzing sessions

## Linux

### Use the manually crafted HTML tag dictionary provided by AFL++

```
$ sudo apt-get install -y libgc-dev libglib2.0-dev gnuplot
$ git clone https://github.com/tats/w3m
$ cd w3m
$ CC=afl-clang-fast CXX=afl-clang-fast++ ./configure
$ make w3m
$ mkdir fuzz-in
$ cp tests/* fuzz-in/
$ afl-fuzz -i fuzz-in -o fuzz-out-dict -x /usr/local/share/afl/dictionaries/html_tags.dict -- ./w3m @@
$ afl-plot fuzz-out-dict/default fuzz-out-dict-graph
```

### Use AFL++'s autodictionary feature to generate a dictionary based on string comparisons during compilation

```
$ make clean
$ AFL_LLVM_DICT2FILE=/home/raptor/w3m/auto.dict make w3m
$ head -20 auto.dict
"\xfd\xff\xff\x03"
"\xfe\xff\xff\x03"
"content-type"
"user-agent"
"\xfd\xff\xff\x03"
"\xfc\xff\xff\x03"
"\xfd\xff\xff\x03"
"\xfc\xff\xff\x03"
"\xfd\xff\xff\x03"
"\xfe\xff\xff\x03"
"Download List Panel"
"\xfd\xff\xff\x03"
"\xfc\xff\xff\x03"
"\xfd\xff\xff\x03"
"\xfc\xff\xff\x03"
"\xfd\xff\xff\x03"
"\xfc\xff\xff\x03"
"\xfd\xff\xff\x03"
"\xfc\xff\xff\x03"
"!CURRENT_URL!"
$ afl-fuzz -i fuzz-in -o fuzz-out-autodict -x auto.dict -- ./w3m @@
$ afl-plot fuzz-out-autodict/default fuzz-out-autodict-graph
```

### Simply rely only on coverage-guided fuzzing without any dictionaries

```
$ afl-fuzz -i fuzz-in -o fuzz-out -- ./w3m @@
$ afl-plot fuzz-out/default fuzz-out-graph
```
