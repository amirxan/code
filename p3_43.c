#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three nonzero integers: ");
    scanf_s("%d%d%d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        printf("%d, %d, %d could be the sides of a triangle.\n", a, b, c);
    }
    else {
        printf("%d, %d, %d could NOT be the sides of a triangle.\n", a, b, c);
    }

    return 0;
}