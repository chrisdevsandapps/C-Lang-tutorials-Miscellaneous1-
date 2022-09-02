

#include <stdio.h>
#include <unistd.h>

void spacer() {
	printf("\n");
}

void f1() {
	// initialized value = 100
	// added 10 using pointer
	// added another 10 using pointer
	printf("\nf1():\n");

    printf("\npointerTest():\n");
 
    int var111 = 100;
    printf("int var111 = 100;\n");
    printf("current value of var111: %d\n", var111);

	spacer();
	int *pointer1 = &var111;
	printf("int *pointer1 = &var111;\n");
	printf("value of &var111: %p\n", &var111);
	printf("value of *pointer1: %d\n", *pointer1);
     printf("value of pointer1: %p\n", pointer1);

	spacer();

    var111 = (*pointer1) + 10;
	printf("var111 = (*pointer1) + 10;\n");
	printf("value of &var111: %p\n", &var111);
	printf("value of *pointer1: %d\n", *pointer1);
	printf("value of pointer1: %p\n", pointer1);

	spacer();
	
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

pointerTest():
int var111 = 100;
current value of var111: 100

int *pointer1 = &var111;
value of &var111: 0x7ffee543b89c
value of *pointer1: 100
value of pointer1: 0x7ffee543b89c

var111 = (*pointer1) + 10;
value of &var111: 0x7ffee543b89c
value of *pointer1: 110
value of pointer1: 0x7ffee543b89c

var111 = (*pointer1) + 10;
value of &var111: 0x7ffee543b89c
value of *pointer1: 120
value of pointer1: 0x7ffee543b89c


*/





