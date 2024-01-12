#include "example.h"
#include "acutest.h"

void test_sanity(void)
{
    TEST_CHECK(example_add(1,2) == 1 + 2);
}

TEST_LIST = {
    { "sanity", test_sanity },
    { NULL, NULL }
};
