#include <stdio.h>

#define EMP_COUNT 100

struct Employee {
    char name[50];
    float basicPay;
    float grossSalary;
};

int main() {
    struct Employee emp[EMP_COUNT];
    int i;

    printf("Enter details of %d employees:\n", EMP_COUNT);

    for (i = 0; i < EMP_COUNT; i++) {
        printf("\nEmployee %d name: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);

        float da = 0.52 * emp[i].basicPay; 
        emp[i].grossSalary = emp[i].basicPay + da;
    }

    printf("\n--- Employee Gross Salary List ---\n");
    printf("Name\t\tGross Salary\n");
    printf("----------------------------------\n");

    for (i = 0; i < EMP_COUNT; i++) {
        printf("%-15s %.2f\n", emp[i].name, emp[i].grossSalary);
    }

    return 0;
}