AC_INIT([example], [0.1], [])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([foreign subdir-objects -Wall -Werror])

AC_PROG_CC
AC_PROG_RANLIB

AC_CHECK_HEADERS([acutest.h])
AM_CONDITIONAL([RUN_TESTS], [test "x$ac_cv_header_acutest_h" = xyes])

AC_CONFIG_FILES([Makefile])
AC_REQUIRE_AUX_FILE([tap-driver.sh])

AC_OUTPUT