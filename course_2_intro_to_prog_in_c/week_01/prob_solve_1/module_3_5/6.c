#include <stdio.h>
int main() 
{
    float i, s;
    printf("Input the working hrs: ");
    scanf("%f", &i);

    printf("Salary amount/hr: ");
    scanf("%f", &s);
    
    float o = i * s;

    printf("Salary = %.2f", o);
    
    return 0;
}

