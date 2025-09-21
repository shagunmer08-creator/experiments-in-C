int main(){
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The given sides form a valid triangle.\n");
         
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
       
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
       
        else {
            printf("It is a Scalene triangle.\n");
        }

       
     if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a)) {
            printf("It is also a Right-angled triangle.\n");
        }
    
    }
    else {
        printf("The given sides do NOT form a valid triangle.\n");
    }
}
