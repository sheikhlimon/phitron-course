/**
 *	author: sheikhlimon
 *	created: 18.06.2022
 */

#include <stdio.h>
#include <string.h>

float make_sum(float a, float b)
{
    float sum;
    sum = a + b;
    return sum;
}

int main()
{
    float a=5.44, b = 4.3344;
    printf("%lf", make_sum(a, b));

    return 0;
}