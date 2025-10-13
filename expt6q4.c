#include <stdio.h>


int ISPRIME(int num) {
    if (num <= 1)
        return 0; 

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }

    return 1; 
}

int main() {
    int start, end;
    printf("shagun mer\n");
    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}