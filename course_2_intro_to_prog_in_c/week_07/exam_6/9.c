#include <stdio.h>
#include <string.h>
#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE * 2 - 1

int rotateLeft(int a, unsigned int rotate)
{
    rotate %= INT_BITS;
    int MSB;
    while (rotate--)
    {
        MSB = a & (1 << INT_BITS);
        a = a << 1;
        a = a | MSB;
    }
    return a;
}

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
    int x = rotateLeft(a, b);

    DecToBin(x);

    return 0;
}