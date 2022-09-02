

// https://www.youtube.com/watch?v=r2zRkT28p14

#include <stdio.h>
#include <unistd.h>

void spacer() {
	printf("##############################################\n");
	printf("##############################################\n");
}

void add100(int *inputValue) {
	*inputValue = *inputValue + 100;
}

void f1() {
	// pointers using function
	printf("\nf1():\n");
    printf("\npointerTest\n");


    int var111 = 100;
    printf("int var111 = 100;\n");
    printf("current value of var111: %d\n", var111);

	spacer();
	usleep(1000000);


	int *pointer1 = &var111;
	
	printf("int *pointer1 = &var111\n");
	printf("value of &var111: %p\n", &var111);
	printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);
	
	spacer();
	usleep(1000000);


	add100(&var111);

	printf("add100(&var111)\n");
	printf("value of &var111: %p\n", &var111);
	printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);

	spacer();
	usleep(1000000);


    var111 = (*pointer1) + 10;

	printf("var111 = (*pointer1) + 10;\n");
	printf("value of &var111: %p\n", &var111);
	printf("value of *pointer1: %d\n", *pointer1);
	printf("value of pointer1: %p\n", pointer1);

	spacer();
	usleep(1000000);
	

    var111 = (*pointer1) + 10;

	printf("var111 = (*pointer1) + 10;\n");
	printf("value of &var111: %p\n", &var111);
	printf("value of *pointer1: %d\n", *pointer1);
	printf("value of pointer1: %p\n", pointer1);
}


int main() {
	f1();
	spacer();
	return 0;
}

/*
 
f1():

pointerTest
int var111 = 100;
current value of var111: 100

int *pointer1 = &var111
value of &var111: 0x7ffee73e489c
value of *pointer1: 100
value of pointer1: 0x7ffee73e489c

add100(&var111)
value of &var111: 0x7ffee73e489c
value of *pointer1: 200
value of pointer1: 0x7ffee73e489c

var111 = (*pointer1) + 10;
value of &var111: 0x7ffee73e489c
value of *pointer1: 210
value of pointer1: 0x7ffee73e489c

var111 = (*pointer1) + 10;
value of &var111: 0x7ffee73e489c
value of *pointer1: 220
value of pointer1: 0x7ffee73e489c

*/



