
#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    printf("shagun mer\n");
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("Frequency of %d is: %d\n", num, count);

    return 0;
}

