#include <stdio.h>

int main() {
    int x = 10;  

    {
        int y = 20; 
        printf("shagun mer\n");
        printf("Inside Block 1: x = %d, y = %d\n", x, y);
    }

    {
        int z = 30;  
        printf("Inside Block 2: x = %d, z = %d\n", x, z);
    }

    printf("Outside both blocks: x = %d\n", x);

    return 0;
}