#include <stdio.h>

void counter_function() {
    static int counter = 0;
    counter++;  
    printf("shagun mer\n");
    printf("Counter value: %d\n", counter);
}
int main() {
   
    printf("First call:\n");
    counter_function();

    printf("Second call:\n");
    counter_function(); 

    printf("Third call:\n");
    counter_function(); 

    return 0;
}