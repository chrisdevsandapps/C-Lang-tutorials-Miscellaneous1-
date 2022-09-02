
/*
pointer topic,
starts at timeline: https://youtu.be/YMBgABnC8M8?t=1786
title: 5.2 - Functions, Pointers (2020/09/14)

gamit sa pag visualize: https://pythontutor.com/
*/

#include<stdlib.h>
#include<stdio.h>

void spacer();
void txts(char input[]);
void swap2Values(int *a, int *b);

int main() {

    int x = 33;
    int y = 99;

    // int *pointerToX;
    // int *pointerToX = NULL;
    int *pointerToX = &x;
    
    // printf("value of pointerToX: %d\n", pointerToX);
    printf("1 value of pointerToX:\t %p\n", pointerToX);
    printf("1 value of &x:\t\t %p\n", &x);

    spacer();

    x = x + 8;

    printf("2 value of pointerToX:\t %p\n", pointerToX);
    printf("2 value of &x:\t\t %p\n", &x);

    spacer();
    spacer();

    printf("x: %d, y: %d\n", x, y);
    swap2Values(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}




void swap2Values(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void spacer() { printf("\n"); }
void txts(char input[]) { printf("%s\n", input); }
