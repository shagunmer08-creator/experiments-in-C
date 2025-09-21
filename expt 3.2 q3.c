#include <stdio.h>
void printPartA() {
    printf("shagun mer\n");
    int num = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}
void printPartB() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;

            printf("%d ", num);
        }
        printf("\n");
    }
}

int main() {
    printPartA();
    printPartB();
    return 0;
}