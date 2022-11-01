#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d", &a, &b, &c);
    d = a + b;
    e = a + c;
    f = b + c;

    if (d < e && d < f)
        printf("%d", d);
    else if(e<d && e<f)
        printf("%d", e);
    else
        printf("%d", f);
    return 0;
}