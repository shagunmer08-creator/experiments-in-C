#include <stdio.h>

int main() {
    int a, b, c, d;
    int n1, n2;
    int limit;
    printf("shagun mer\n");
    printf("Enter the maximum number limit: ");
    scanf("%d", &limit);

    printf("\nRamanujan Numbers up to %d are:\n", limit);

    for (a = 1; a * a * a < limit; a++) {
        for (b = a; b * b * b < limit; b++) {
            n1 = a*a*a + b*b*b;

            for (c = a+1; c * c * c < limit; c++) {
                for (d = c; d * d * d < limit; d++) {
                    n2 = c*c*c + d*d*d;

                    if (n1 == n2 && n1 <= limit) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               n1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;

}