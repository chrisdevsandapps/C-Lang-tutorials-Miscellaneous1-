
// cc calculator.c -o hello cs50.c

#include "cs50.h"
#include <stdio.h>

int main(void) {

    long x = get_int("x:\t\t");
    long y = get_int("y:\t\t");
    long z = x * y;
    printf("sum:\t\t%li\n", x + y);
    printf("product:\t%li\n", z);
    return 0;
}