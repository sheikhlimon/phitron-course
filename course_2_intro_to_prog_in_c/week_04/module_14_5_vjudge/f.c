/**
 *	author : sheikhlimon
 *	created : 12.05.2022
 **/

#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long val = 1;
    for (long long i = 0; i <= 60; i++)
    {
        if (val > n)
        {
            printf("%lld", i - 1);
            break;
        }
        val *= 2;
    }
    return 0;
}