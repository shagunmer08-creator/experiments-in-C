#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';+

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &c;

    printf("Original addresses:\n");
    printf("ptr1 (int)  = %p\n", (void*)ptr1);
    printf("ptr2 (float)= %p\n", (void*)ptr2);
    printf("ptr3 (char) = %p\n\n", (void*)ptr3);

    ptr1++;
    ptr2++;
    ptr3++;

    printf("After increment:\n");
    printf("ptr1 (int)  = %p\n", (void*)ptr1);
    printf("ptr2 (float)= %p\n", (void*)ptr2);
    printf("ptr3 (char) = %p\n\n", (void*)ptr3);

    ptr1--;
    ptr2--;
    ptr3--;

    printf("After decrement (back to original):\n");
    printf("ptr1 (int)  = %p\n", (void*)ptr1);
    printf("ptr2 (float)= %p\n", (void*)ptr2);
    printf("ptr3 (char) = %p\n", (void*)ptr3);

    return 0;
}