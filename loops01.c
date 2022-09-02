

// https://www.youtube.com/watch?v=RWielfkuMBs

// https://www.youtube.com/watch?v=I-vw0aIZ4FI

// https://www.youtube.com/watch?v=1KQqpiXxvWQ

#include <stdio.h>
#include <unistd.h>
#include <time.h>

void spacer(char input[]) {
    printf("%s\n", input);
}

void f1() {
	printf("\nf1()\n");

    const int arraySize = 6;

    int myArray[arraySize] = {11, 22, 33, 44, 55, 66};

    spacer("using whileLoop:");
    int index = 0;
    while (index < arraySize) {
        printf("%d  :  %d\n", index, myArray[index]);
        index = index + 1;
        usleep(500000);
    }
    
    spacer("using forLoop:");
    for(int i = 0; i < arraySize; i++) {
        printf("%d  :  %d\n", i, myArray[i]);
        usleep(500000);
    }

}
//################################################# 
//################################################# 

int main() {
    long before = time(NULL);
    printf("loops01.c\n");
	f1();
    long after = time(NULL);
    printf("elapsed time: %ld seconds", after - before);


    spacer(" ");
    long before2 = clock();
    f1();
    long after2 = clock();
    double elapsed = (double)(after2 - before2)/CLOCKS_PER_SEC;
    printf("elapsed time: %lf seconds", elapsed * 10000);
	return 0;
}
