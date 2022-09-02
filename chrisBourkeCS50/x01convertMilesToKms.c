

#include<stdlib.h>
#include<stdio.h>

#define KMS_PER_MILE 1.60934

void spacer() { printf("\n");}
void txts(char input[]) { printf("%s\n", input);}

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

void f2() {
    txts("f2():");
    printf("the left hand side must always be a variable\n");
    printf("assignment operator is always \"=\"\n");
    printf("the right hand side can be a variable, a literal, or an expression\n");

    int xxx;
    // 1000 is the literal value:
    xxx = 1000;
    printf("xxx: %d\n", xxx);

    int yyy = 888;

    xxx = yyy;
    printf("xxx: %d\n", xxx);

    spacer();
}

void f3() {
    txts("f3():");
    txts("modulus");

    // int a = 10;
    // int b = 20;

    int a = 100;
    int b = 3;

    int integerDivisionResult = a / b;
    double doubleDivisionResult = (double)a / (double)b;
    int modulusResult = a % b; 

    printf("integer division result:   %d\n", integerDivisionResult);
    printf("double division result:   %lf\n", doubleDivisionResult);
    printf("modulus result:   %d\n", modulusResult);



    
    spacer();

}

int main() {
    printf("x01convertMilesToKms.c\n");

    f1();
    f2();
    f3();
    return 0;
}
