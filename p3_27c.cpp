#include <stdio.h>

int main(void)
{
    int value;

    printf("Enter 1 or 2: ");
    scanf_s("%d", &value);

    while (value != 1 && value != 2)
    {
        printf("Enter 1 or 2: ");
        scanf_s("%d", &value);
    }

    printf("You entered %d\n", value);

    return 0;
}
