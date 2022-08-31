

// https://www.youtube.com/watch?v=RWielfkuMBs

#include <stdio.h>
#include <unistd.h>

void spacer() {
	printf("\n");
}

void f1() {
	printf("\nf1()\n");
}

int main() {
    printf("loops01.c\n");
	f1();
    usleep(1000000);
    f1();

	return 0;
}
