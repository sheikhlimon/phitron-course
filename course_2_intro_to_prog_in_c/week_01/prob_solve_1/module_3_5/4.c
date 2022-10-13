#include <stdio.h>
int main() 
{
    float P, T, R;
    scanf("%f %f %f", &P, &T, &R);

    float i = (P*T*R)/100;

    printf("Simple Interest = %f\n",i);

    float pi = i + P;

    printf("Principal + Interest = %.1f", pi);
    
    return 0;
}

