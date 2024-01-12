AUTOMAKE_OPTIONS = foreign

AM_CFLAGS = -I$(top_srcdir)/include

lib_LIBRARIES = libexample.a
libexample_a_SOURCES = src/example.c

if RUN_TESTS
TESTS = test_example
check_PROGRAMS = test_example

test_example_SOURCES = test/test_example.c
test_example_LDADD = libexample.a
endif
