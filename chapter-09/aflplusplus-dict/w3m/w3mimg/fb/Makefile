#
# w3mimg/fb/Makefile
#
#

SHELL=/bin/bash
srcdir = .
top_srcdir = ../..
VPATH = .
CFLAGS=$(OPTS) -I../.. -I$(top_srcdir) -I$(srcdir) -g -O2 -I$(srcdir)/libwc   -DHAVE_CONFIG_H $(IMGCFLAGS)
RM=rm

IMGCFLAGS=-I/usr/include/gdk-pixbuf-2.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/libpng16 -I/usr/include/x86_64-linux-gnu -I/usr/include/webp -pthread -I/usr/include/libmount -I/usr/include/blkid 
OBJS=fb.o fb_img.o 

all: fb_w3mimg.o fb.o fb_img.o

fb_w3mimg.o: fb_w3mimg.c
	$(CC) $(CFLAGS) -c $<

fb.o: fb.c
	$(CC) $(CFLAGS) -c $<

fb_img.o: fb_img.c fb_gdkpixbuf.c fb_imlib2.c
	$(CC) $(CFLAGS) -c $<

clean:
	@-$(RM) -f *.o

distclean: clean
	-$(RM) -f Makefile

#


