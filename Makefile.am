AUTOMAKE_OPTIONS = foreign

AM_CFLAGS = -I$(top_srcdir)/include

lib_LIBRARIES = libexample.a
libexample_a_SOURCES = src/example.c

if RUN_TESTS
TEST_LOG_DRIVER = env AM_TAP_AWK='$(AWK)' $(SHELL) $(top_srcdir)/build-aux/tap-driver.sh
TESTS = test/test_example.test
EXTRA_DIST = $(TESTS)
check_PROGRAMS = test/test_example

test_test_example_SOURCES = test/test_example.c
test_test_example_LDADD = libexample.a
endif
