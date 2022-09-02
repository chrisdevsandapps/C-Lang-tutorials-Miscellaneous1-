
/*
this file makes inputs to the arguments during runtime
example:
$ programName 100

*/

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

//####################################################################
//####################################################################
//####################################################################
//####################################################################
//####################################################################
void f2() {
    txts("f2():");

}
//####################################################################
//####################################################################
//####################################################################
//####################################################################
//####################################################################
int main(int argc, char **argv) {
    txts("x02CLIarguments1.c");

    double miles;
    double kms;

    // to check if cli argument is kulang or sobra:
    if (argc != 2) {
        printf("ERROR: you must provide miles as a command line argument");
        exit(1);
    }

    /* 
    the miles provided as a command line argument will be stored in:
    argv[1]
    exaple: $./a.out 100
    */

    // convert the value to from alphanumeric to float:
    miles = atof(argv[1]);

    kms = KMS_PER_MILE * miles;

    spacer();
    printf("%f miles is equal to %f kilometers\n", miles, kms);
    spacer();
    spacer();

    f1();

    return 0;
}
/*
argc --- number of arguments (argument count)
argv --- the vector arguments
argv[0] --- is always the executable program name
argv[1] --- is the actual first argument provided by the user
argv[2] --- is the second, etc.

converting:
atof() --- convert to floating point number (double)
atoi() --- convert to integer (int)

*/
