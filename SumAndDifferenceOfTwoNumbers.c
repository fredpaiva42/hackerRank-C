#include <stdio.h>

//Task
//Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
//    1. Declare 4 variables: two of type int and two of type float.
//    2. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
//    3. Use the + and - operator to perform the following operations:
//        - Print the sum and difference of two int variable on a new line.
//        - Print the sum and difference of two float variable rounded to one decimal place on a new line.

int main(){
    int i1, i2;
    float f1, f2;

    scanf("%d %d", &i1, &i2);
    scanf("%f %f", &f1, &f2);

    printf("%d %d\n", (i1 + i2), (i1 - i2));
    printf("%.1f %.1f", (f1 + f2), (f1 - f2));
}