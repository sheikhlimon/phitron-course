#include<stdio.h>
#include<string.h>

int xor(int n)
{
    int mod = n%4;

    if(mod == 0)
        return n;

    else if(mod == 1)
        return 1;

    else if(mod == 2)
        return n + 1;

    else if(mod == 3)
        return 0;
}

int findXor(int l, int r)
{
    return (xor(l-1) ^ xor(r));
}

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    printf("%d", findXor(l, r));

    return 0;
}