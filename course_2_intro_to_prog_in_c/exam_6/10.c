#include <stdio.h>
#include <string.h>

void DecToBin(int n)
{
    long long binary = 0;
    int rem, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    printf("%lld\n", binary);
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    DecToBin(a);

    int x = a & (1 << b);

    if (x)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}