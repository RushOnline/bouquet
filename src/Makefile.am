AM_CPPFLAGS = -I$(top_srcdir)/include

AM_YFLAGS = -d

bin_PROGRAMS=bouquet

BUILT_SOURCES= parser.h

bouquet_SOURCES= \
	parser.y \
	lexer.l \
	carray.c \
	cbac.c \
	cclass.c \
	cexpr.c \
	cgetput.c \
	check.c \
	cid.c \
	cmap.c \
	compile.c \
	cout.c \
	cpragma.c \
	ctrace.c \
	cvar.c \
	cverbatim.c \
	cxml.c \
	error.c \
	eval.c \
	main.c \
	ptree.c \
	symbol.c \
	util.c

lt-relink-executables:
	@echo 'relinking...'
	@libtool --mode=execute true $(top_srcdir)/src/bouquet

all-local: lt-relink-executables

.PHONY: lt-relink-executables
