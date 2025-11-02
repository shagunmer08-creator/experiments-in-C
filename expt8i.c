#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &c;

    printf("Value of a: %d, Address stored in ptr1: %p\n", *ptr1, (void*)ptr1);
    printf("Value of b: %.2f, Address stored in ptr2: %p\n", *ptr2, (void*)ptr2);
    printf("Value of c: %c, Address stored in ptr3: %p\n", *ptr3, (void*)ptr3);

    return 0;
}