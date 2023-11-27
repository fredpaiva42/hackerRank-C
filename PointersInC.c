//Task
//Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of
//to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.
//    - a' = a + b
//    - b' = |a - b|
#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b){
    int tempA = *a, tempB = *b;
    *a = tempA + tempB;
    *b = abs(tempA - tempB);
}

int PointersInC(){
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}