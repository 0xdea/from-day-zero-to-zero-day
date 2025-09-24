#
# w3mimg/x11/Makefile
#
#

SHELL=/bin/bash
srcdir = .
top_srcdir = ../..
VPATH = .
CFLAGS=$(OPTS) -I../.. -I$(top_srcdir) -I$(srcdir) -g -O2 -I$(srcdir)/libwc   -DHAVE_CONFIG_H $(IMGCFLAGS)
RM=rm

IMGCFLAGS=
OBJS=x11_w3mimg.o

all: x11_w3mimg.o

x11_w3mimg.o: x11_w3mimg.c
	$(CC) $(CFLAGS) -c $<

clean:
	@-$(RM) -f *.o

distclean: clean
	-$(RM) -f Makefile

#


