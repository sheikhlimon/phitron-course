#include <stdio.h>
int main() 
{
    float c;
    printf("Enter temperature in Celsius = ");

    scanf("%f", &c);

    float f = (c*9/5)+32;

    printf("Temperature in Fahrenheit = %.1f F", f);
    
    return 0;
}

