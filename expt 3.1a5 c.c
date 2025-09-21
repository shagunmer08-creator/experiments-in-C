#include <stdio.h>

int main() {
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;

    printf("shagun mer\n");
    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%f %f", &l1, &b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%f %f", &l2, &b2);

    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%f %f", &l3, &b3);

   
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    int maxIndex = (p1 > p2 && p1 > p3) ? 1 : 
                   (p2 > p3) ? 2 : 
                   (p3 > p1 && p3 > p2) ? 3 : 0;

    printf("\nPerimeter of Rectangle 1: %.2f", p1);
    printf("\nPerimeter of Rectangle 2: %.2f", p2);
    printf("\nPerimeter of Rectangle 3: %.2f", p3);

    if (maxIndex == 0) {
        printf("\nTwo or more rectangles have the same highest perimeter.\n");
    } else {
        printf("\nRectangle %d has the highest perimeter.\n", maxIndex);
    }

    return 0;
}