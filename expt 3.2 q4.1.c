#include <stdio.h>
#include <math.h>

int main() {
    double population = 100000;
    double rate = 0.10; 
    printf("shagun mer\n");
    printf("Year\tPopulation\n");
    printf("----------------------\n");

    for (int year = 1; year <= 10; year++) {
        population = population + (population * rate); 
        printf("%d\t%.0f\n", year, population);  
    }

    return 0;
}


