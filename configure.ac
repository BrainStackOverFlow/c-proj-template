AC_INIT([example], [0.1], [])
AM_INIT_AUTOMAKE([foreign subdir-objects -Wall -Werror])

AC_PROG_CC
AC_PROG_RANLIB

AC_CHECK_HEADERS([acutest.h])
AM_CONDITIONAL([RUN_TESTS], [test "x$ac_cv_header_acutest_h" = xyes])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT