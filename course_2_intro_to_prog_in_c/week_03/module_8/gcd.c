#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    while (num1 != 0)
    {
        int rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }
    printf("gcd %d\n", num2) ;
    
    return 0;
}