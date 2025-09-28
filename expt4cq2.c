#include <stdio.h>

int global_var = 100;
void my_function() {
    int local_var = 50; 
    printf("shagunmer\n");
    printf("Inside function, global_var: %d\n", global_var);
    printf("Inside function, local_var: %d\n", local_var);
}

int main() {
    my_function();
    printf("Outside function, global_var: %d\n", global_var);

    return 0;
}