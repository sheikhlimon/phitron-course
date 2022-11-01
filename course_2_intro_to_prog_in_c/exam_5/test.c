#include<stdio.h>
#include<string.h>

int add(int a, int b)
{
    for (int i = 1; i<= b; i++)
        a++;
    return a;
}

int main()
{
    int a = add(5, 6);
    printf("%d", a);

    return 0;
}