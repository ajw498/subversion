# Makefile for GNU diffutils
# Written by Nick Burrett <nick@dsvr.net>

INCLUDES = -I.
CROSS_CFLAGS += -DHAVE_CONFIG_H
CROSS_CC = gcc

bin_dir = ../\!SVN
exesfx = ,ff8

%.o: %.c
	$(CROSS_CC) $(CROSS_CFLAGS) -o $@ -c $< $(INCLUDES)

DIFFOBJS = diff.o \
	analyze.o \
	cmpbuf.o \
	dir.o \
	io.o \
	util.o \
	context.o \
	ed.o \
	ifdef.o \
	normal.o \
	side.o \
	fnmatch.o \
	getopt.o \
	getopt1.o \
	version.o \
	regex.o

DIFF3OBJS = diff3.o \
	getopt.o \
	getopt1.o \
	version.o


SDIFFOBJS = sdiff.o \
	getopt.o \
	getopt1.o \
	version.o

CMPOBJS = cmp.o \
	cmpbuf.o \
	error.o \
	getopt.o \
	getopt1.o \
	xmalloc.o \
	version.o

all:	$(bin_dir)/diff$(exesfx) $(bin_dir)/diff3$(exesfx)

$(bin_dir)/diff$(exesfx):	$(DIFFOBJS)
	$(CROSS_CC) -o $@ $(DIFFOBJS)

$(bin_dir)/diff3$(exesfx):	$(DIFF3OBJS)
	$(CROSS_CC) -o $@ $(DIFF3OBJS)

$(bin_dir)/sdiff$(exesfx):	$(SDIFFOBJS)
	$(CROSS_CC) -o $@ $(SDIFFOBJS)

$(bin_dir)/cmp$(exesfx):	$(CMPOBJS)
	$(CROSS_CC) -o $@ $(CMPOBJS)


analyze.o:	diff.h cmpbuf.h analyze.c
cmp.o:	system.h getopt.h cmpbuf.h cmp.c
cmpbuf.o:	system.h cmpbuf.h cmpbuf.c
context.o:	diff.h context.c
diff.o:	diff.h getopt.h fnmatch.h diff.c
diff3.o:	diff.h getopt.h diff3.c
dir.o:	diff.h dir.c
ed.o:	diff.h ed.c
error.o:	error.c
fnmatch.o:	fnmatch.c
getopt.o:	getopt.h getopt.c
getopt1.o:	getopt.h getopt1.c
ifdef.o:	diff.h ifdef.c
io.o:	diff.h io.c
memchr.o:	memchr.c
normal.o:	diff.h normal.c
regex.o:	regex.h regex.c
sdiff.o:	system.h getopt.h sdiff.c
side.o:	diff.h side.c
util.o:	diff.h util.c
version.o:	version.c
waitpid.o:	system.h
xmalloc.o:	xmalloc.c
