dnl Process this file with autoconf to produce a configure script.

dnl AC_PREREQ(2.59)
AC_INIT(bouquet, 1.0, rush.zlo@gmail.com)

AM_MAINTAINER_MODE([enable])

AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE()

AC_PROG_CXX
AC_PROG_CC
AC_PROG_YACC
AC_PROG_LEX

if test "x$LEX" != xflex; then
    LEX="$SHELL $missing_dir/missing flex"
    AC_SUBST([LEX_OUTPUT_ROOT], [lex.yy])
    AC_SUBST([LEXLIB], [''])
fi

AC_CONFIG_FILES(Makefile src/Makefile)
AC_OUTPUT

