#include "example.h"
#include "acutest.h"

void test_sanity(void)
{
    TEST_CHECK(example_add(1,2) == 1 + 2);
}

void test_sanity2(void)
{
    TEST_CHECK(example_add(1,-1) == 2);
}

TEST_LIST = {
    { "sanity", test_sanity },
    { "sanity2", test_sanity2 },
    { NULL, NULL }
};
