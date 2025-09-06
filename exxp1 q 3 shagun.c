#include <stdio.h>
int main(){
    char name[20];  //with store only space upto gic=ven number of b ytes.
    int age;

    printf("enter your name:\n");
    fgets(name, sizeof(name), stdin); //reads line of text

    printf("enter your age:");
    scanf("%d", &age);

    printf("\nhello, %s you are %d years old\n",name,age);\
    
    return 0;
}