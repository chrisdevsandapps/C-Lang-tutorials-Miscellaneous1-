
/*
this program read in 3 coefficients of a quadratic polynomial
and computes its roots using quadratic formula.

*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define KMS_PER_MILE 1.60934

void spacer() { printf("\n"); }
void txts(char input[]) { printf("%s\n", input); }


int main(int argc, char **argv) {

    txts("x02CLIarguments2.c");

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    
    // to check if cli argument is kulang or sobra:
    if (argc != 4) {
        printf("ERROR: you must provide 3 inputs to the command line argument\n");
        exit(1);
    }

    double root1;
    double root2;
    
    root1 = (-b + sqrt((b*b) - (4*a*c))) / (2*a);
    root2 = (-b - sqrt((b*b) - (4*a*c))) / (2*a);

    printf("the roots of %lfx^2 + %lfx + %lf = %lf and %lf\n", a, b, c, root1, root2);


    return 0;
}
