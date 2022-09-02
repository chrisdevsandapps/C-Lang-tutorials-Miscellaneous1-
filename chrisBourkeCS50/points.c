
// cc points.c -o hello cs50.c

#include "cs50.h"
#include <stdio.h>

int main(void) {

    int points = get_int("how many points did you lose?\t");

    if (points < 2) {
        printf("you lost fewer points");
    }
    else if (points > 2) {
        printf("you lost more points than me");
    }
    else {
        printf("you lost the same number of points as me");
    }
    return 0;
}