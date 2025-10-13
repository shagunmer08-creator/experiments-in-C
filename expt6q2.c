#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return GCD(num2, num1 % num2);
}

int main() {
    int a, b;
    printf("shagun mer\n");
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int result = GCD(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, result);

    return 0;
}