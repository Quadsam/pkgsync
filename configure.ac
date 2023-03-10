AC_PREREQ([2.71])
AC_INIT([pkgsync], [0.1.1], [pkgsync@quadsam.com])
AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_COMMANDS([json-c], [cmake -S src/json-c -B src/json-c])
AC_PROG_CC
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
