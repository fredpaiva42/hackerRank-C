//Task
// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
//Note
//There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

#include <stdio.h>

int max(int x, int y){

    return y > x ? y : x;
}

int max_of_four(int a, int b, int c, int d){
    int maior;

    maior = max(a, b);
    maior = max(maior, c);
    maior = max(maior, d);

    return maior;
}

int FunctionInC(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}