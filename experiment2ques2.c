#include <stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("print temperature in celcius:");
    scanf("%f",&celcius);
    fahrenheit =(celcius * 9 / 5) + 32;
    printf("temperature in fahrenhiet: %.2f\n",fahrenheit);
    return 0;
}