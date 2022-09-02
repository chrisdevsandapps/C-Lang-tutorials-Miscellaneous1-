

#include<stdlib.h>
#include<stdio.h>

#define KMS_PER_MILE 1.60934

void spacer() { printf("\n"); }
void txts(char input[]) { printf("%s\n", input); }

void f1() {
    txts("f1():");
    double miles;
    double kms;
	
    printf("please enter miles: \t");
	
	spacer();

	//read in the input:
    scanf("%lf", &miles);

    kms = KMS_PER_MILE * miles;

    printf("%f miles is equal to %f kilometers\n", miles, kms);

    spacer();
}

int main() {
    txts("x02args.c");

    f1();

    return 0;
}
