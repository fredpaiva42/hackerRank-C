#include <stdio.h>

int ForLoopsInC(){
    int a, b;
    char *numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d\n%d", &a, &b);

    for (int i = a; i <= b; ++i) {
        if(i >= 1 && i <= 9){
            printf("%s\n", numbers[i-1]);
        }else{
            i % 2 == 0 ? printf("even\n") : printf("odd\n");
        }
    }


    return 0;
}