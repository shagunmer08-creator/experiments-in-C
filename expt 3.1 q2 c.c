#include <stdio.h>
int main() {
    float weight, height, bmi;
    printf("shagun mer\n");

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight/(height * height);

    if (bmi < 15) {
        printf("Category: Starvation\n");
    } else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("Category: Anorexic\n");
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("Category: Ideal\n");
    } else if (bmi >= 25 && bmi <= 25.9) {
        printf("Category: Overweight\n");
    } else if (bmi >= 30 && bmi <= 39.9) {
        printf("Category: Obese\n");
    } else if (bmi >= 40.0) {
        printf("Category: Morbidly Obese\n");
    } else {
        printf("Category: Invalid Range!\n");
    }
    return 0;
    
}