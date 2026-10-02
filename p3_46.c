#include <stdio.h>

int main(void)
{
    double population;   
    double growthRate;  
    int year;

    printf("Enter the current population: ");
    scanf_s("%lf", &population);

    printf("Enter the growth rate  ");
    scanf_s("%lf", &growthRate);

    printf("\n%-10s %20s\n", "Years", "Estimated Population");


    for (year = 1; year <= 5; ++year) {
        population *= 1.0 + growthRate / 100.0;


        if (year != 3) {
            printf("%-10d %20.0f\n", year, population);
        }
    }

    return 0;
}