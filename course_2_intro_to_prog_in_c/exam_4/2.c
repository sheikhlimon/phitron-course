#include <stdio.h>

char *Char(int a, double b)
{
    return "a";
}

int main()
{
    int a;
    double b;
    scanf("%d %lf", &a, &b);
    printf("%s", Char(a, b));

    return 0;
}