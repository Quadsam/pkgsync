AC_PREREQ([2.71])
AC_INIT([pkgsync], [0.1.1], [pkgsync@quadsam.com])
AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_COMMANDS([json-c], [mkdir -p src/json-c-build; cd src/json-c-build; ../json-c/cmake-configure; cd ../../])
AC_PROG_CC
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
