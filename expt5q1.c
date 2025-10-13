#include <stdio.h>
int main()
{
    int n; 
    printf("shagun mer\n");
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integer:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest, second_largest;
    largest = second_largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }  else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    printf("The second largest integer is: %d\n", second_largest);
    return 0;
}