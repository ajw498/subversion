# Project:	CVS ee
# Author:	John Tytgat / BASS
# $Id: Makefile,fe1,v 1.4 2004/03/20 20:26:14 joty Exp $

# Project defines :
# ProjectDefines = -g
ProjectDefines = 

CC = cc
CCFLAGS = -c -depend !Depend -Wp -IUnixLib: -JUnixLib: -throwback -APCS 3/32bit/fpe3 $(ProjectDefines)
LINK = link
LINKFLAGS = -aif -c++ -o $@ 
OBJASM = objasm
OBJASMFLAGS = -throwback -NoCache -depend !Depend -stamp -quit
MKDIR = CDir

# Object files
OBJS	= o.riscosify_ee o.eecode

# System libraries :
LDLIBS	= UnixLib:o.UnixLib

# User libraries :
USRLIBS = 

# Final target:

All:	<CVSRODst$Dir>.!CVS.Bin.ee

<CVSRODst$Dir>.!CVS.Bin.ee: $(OBJS) $(LDLIBS)
	@$(MKDIR) <CVSRODst$Dir>.!CVS
	@$(MKDIR) <CVSRODst$Dir>.!CVS.Bin
	$(LINK) $(OBJS) $(LDLIBS) $(LINKFLAGS)
	SetType $@ Absolute

.SUFFIXES: .o .c .cmhg
.INIT:
	@$(MKDIR) o

.c.o:;	$(CC) $(CCFLAGS) -o $@ $<
.s.o:; 	$(OBJASM) $(OBJASMFLAGS) $< $@

# Dynamic dependencies:
