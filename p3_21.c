#include <stdio.h>

int main(void)
{
    int a;


    a = 5;
    printf("Postincrement\n");
    printf("c before:          %d\n", a);
    printf("c++ expression:    %d\n", a++);   
    printf("c after:           %d\n\n", a);   
    a = 5;
    printf("Preincrement\n");
    printf("c before:          %d\n", a);
    printf("++c expression:    %d\n", ++a);
    printf("c after:           %d\n", a);     
    return 0;
}