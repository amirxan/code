#include <stdio.h>

int main(void) {
    int lines = 10;
    int num = 1;

    for (int row = 1; row <= lines; row++) {      
        for (int col = 1; col <= row; col++) {   
            printf("%3d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
