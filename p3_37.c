#include <stdio.h>

int main(void)
{
    unsigned int counter = 1;

    while (counter <= 500) {
        printf("$ ");

        if (counter % 50 == 0) {
            puts("");
        }

        ++counter;
    }

    return 0;
}
