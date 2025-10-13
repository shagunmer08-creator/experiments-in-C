#include <stdio.h>

long long FACT_recursive(int num) {
    if (num == 0)
        return 1;
    else
        return num * FACT_recursive(num - 1);
}

long long FACT_non_recursive(int num) {
    long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

long long binomial_coefficient_recursive(int n, int r) {
    return FACT_recursive(n) / (FACT_recursive(r) * FACT_recursive(n - r));
}

long long binomial_coefficient_non_recursive(int n, int r) {
    return FACT_non_recursive(n) / (FACT_non_recursive(r) * FACT_non_recursive(n - r));
}

int main() {
    int n, r, choice;
    printf("shagun mer\n");
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! Make sure 0 <= r <= n.\n");
        return 1;
    }

    printf("Choose method:\n");
    printf("1. Recursive\n");
    printf("2. Non-Recursive\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    long long result;

    if (choice == 1) {
        result = binomial_coefficient_recursive(n, r);
        printf("Binomial Coefficient C(%d, %d) [Recursive] = %lld\n", n, r, result);
    } else if (choice == 2) {
        result = binomial_coefficient_non_recursive(n, r);
        printf("Binomial Coefficient C(%d, %d) [Non-Recursive] = %lld\n", n, r, result);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}