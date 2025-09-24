#
# w3mimg/Makefile
#

SHELL=/bin/bash
srcdir = .
top_srcdir = ..
VPATH = .
CFLAGS=$(OPTS) -I.. -I$(top_srcdir) -I$(srcdir) -g -O2 -I$(srcdir)/libwc   -DHAVE_CONFIG_H $(IMGCFLAGS)
AR=ar
RANLIB=ranlib
RM=rm

SUBDIRS=fb x11 win
IMGCFLAGS= -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/libpng16 -I/usr/include/x86_64-linux-gnu -I/usr/include/webp -pthread -I/usr/include/libmount -I/usr/include/blkid  
IMGOBJS=w3mimg.o x11/x11_w3mimg.o fb/fb_w3mimg.o fb/fb.o fb/fb_img.o

.PHONY: $(SUBDIRS)
all: w3mimg.a

w3mimg.a: w3mimg.o x11 fb
	$(AR) rv $@ $(IMGOBJS)
	$(RANLIB) $@

w3mimg.o: w3mimg.c
	$(CC) $(CFLAGS) -c $<

$(SUBDIRS):
	cd $@ && $(MAKE) CC="$(CC)" OPTS="$(OPTS)"

clean:
	@-$(RM) -f *.o
	@for dir in $(SUBDIRS); do \
		(cd $$dir && $(MAKE) clean RM=$(RM)); \
	 done
	-$(RM) -f w3mimg.a

distclean: clean
	for subdir in $(SUBDIRS); \
	do \
		(cd $$subdir && $(MAKE) distclean); \
	done
	-$(RM) -f Makefile


#
