

# programming, compiling, running

- sources are plain text files containing computer code in a highlevel programming language (in our current case, "c")

- example below, c-file, named `helloworld.c`

- source files have to be compiled into and executable program (binary code)

- basice process:
    - sourcefile --> assemblyCode --> machineCode


```c
// helloworld.c

#include<stdlib.h>
#include<stdio.h>

int main() {
    printf("hello world!\n");
    printf("hahaha!!!\n");
    return 0;
}

```


# typical compilation
1. the complete three step process discussed above
1. `$gcc helloworld.c`
1. it will produce `a.out` file.
1. to run, `$./a.out`



# step by step process

### 1. put code inside `helloworld.c`




### 2. assemble the code

- assemble with, "-S" flag, 

- `$gcc -S helloworld.c`

- this will compile the program into assembly code

- output file is, `helloworld.s`

- pwede i-open, assembly code ang laman




### 3. compile that assembly code to machine code

- use "-c" flag

- `$gcc -c helloworld.c`

- output file is: `helloworld.o`

- hindi ma-open sa text editor, dahil binary file na ito, (di rin mabuksan dahil sa premission)

- pwede gumamit ng `$hexdump helloworld.o`

- or `$xxd -b helloworld.o`

- output nyan ay puro 1s and 0s




### 4. last step is called linking

- i-link yung mga external library "stdlib.h, stdio.h, etcetera"

- the command is, `$gcc helloworld.o`

- the output file is, `a.out`

- to run, `$./a.out`



### 5. one line command para sa lahat ng steps above

- `gcc helloworld.c -o hahaha`

- outputs a file: `hahaha`

- to run, `$./hahaha`
