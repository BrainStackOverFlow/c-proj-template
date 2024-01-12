#include "example.h"
#include <stdio.h>

int example_add(int a, int b) {
    int result = a +b;
    printf("%i + %i = %i\n", a, b, result);
    return result;
}
