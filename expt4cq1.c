#include <stdio.h>
int global_var = 100;
void function_one() {
    printf("shagun mer\n");
    printf("Inside function_one, global_var: %d\n", global_var);
}

void function_two() {
    global_var = 200;
    printf("Inside function_two, global_var after modification: %d\n", global_var);
}

void function_three() {
    printf("Inside function_three, global_var: %d\n", global_var);
}

int main() {

    function_one();  
    function_two(); 
    function_three();  
    return 0;
}