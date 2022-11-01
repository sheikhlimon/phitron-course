#include <stdio.h>
#include <string.h>
float square(float num)
{
    return (num * num);
}

int main()
{
    float n, sqr;
    scanf("%f", &n);
    sqr = square(n);
    printf("%.2f", sqr);
    return 0;
}