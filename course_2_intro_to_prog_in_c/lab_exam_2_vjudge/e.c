#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);
    int taka = 0, aoki = 0;
    for (int i = 0; i < x; ++i)
    {
        if (i % (a + c) < a)
            taka += b;
        if (i % (d + f) < d)
            aoki += e;
    }
    if (taka > aoki)
        printf("Takahashi\n");
    else if (taka < aoki)
        printf("Aoki\n");
    else
        printf("Draw\n");
    return 0;
}