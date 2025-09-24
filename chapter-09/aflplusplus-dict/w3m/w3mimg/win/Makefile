#
# w3mimg/win/Makefile
#
#

SHELL=/bin/bash
srcdir = .
top_srcdir = ../..
VPATH = .
CFLAGS=$(OPTS) -I../.. -I$(top_srcdir) -I$(srcdir) -g -O2 -I$(srcdir)/libwc   -DHAVE_CONFIG_H $(IMGCFLAGS)
RM=rm
CC=afl-clang-fast
CXX=afl-clang-fast++

IMGCFLAGS=
OBJS=win_w3mimg.o

all: win_w3mimg.o

win_w3mimg.o: win_w3mimg.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
	@-$(RM) -f *.o

distclean: clean
	-$(RM) -f Makefile

#


