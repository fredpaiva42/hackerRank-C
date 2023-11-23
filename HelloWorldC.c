#include <stdio.h>

/*
 *This challenge requires you to print Hello, World! on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command. */

int HelloWorld(void){

    char s[100];
    // `%*c` lê um caractere de entrada e o ignora, sem armazená-lo na variável de saída
    scanf("%[^\n]%*c", &s);

    printf("Hello, World!\n%s", s);

    return 0;
}