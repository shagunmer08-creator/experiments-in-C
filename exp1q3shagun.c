#include <stdio.h>
int main(){
    char name[20];  
    int age;
    printf("enter your name:\n");
    fgets(name, sizeof(name), stdin); 
    printf("enter your age:");
    scanf("%d", &age);
    printf("hello, %s you are %d years old\n",name,age);   
    return 0;
}