#include <stdio.h>
int main(){
    int length,width;
    printf("enter the length of rectangle:");
    scanf("%d",&length);
    printf("enter the width of rectangle:");
    scanf("%d",&width);
    int area = length * width;
    int perimeter = 2*(length + width);
    printf("the area of rectangle %d\n",area);
    printf("the perimeter of rectangle %d\n",perimeter);
    return 0;
}    
