#include <stdio.h>
void div(int a, int b, int *quotient, int *remainder)
{
    *quotient = a / b;
    *remainder = a % b;
}

int main()
{
    int a = 76, b = 10;
    int q, r;
    div(a, b, &q, &r);
    printf("Quotient is: %d\nRemainder is: %d\n", q, r);
}