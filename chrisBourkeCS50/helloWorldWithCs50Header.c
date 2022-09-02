// cc hello.c -o hello cs50.c

#include <stdio.h>
// #include <string.h>
#include "cs50.h"

int main(void) {
    printf("hello world!\n");

    string answer = get_string("what is your name?\t");
    printf("hello %s! wazzup!!!", answer);
    
    return 0;
}
