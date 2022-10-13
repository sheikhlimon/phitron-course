#include <stdio.h>
int main()
{
    int a, b, c, v;
    scanf("%d %d %d %d", &a, &b, &c, &v);
    int f = v - a;
    int m = f - b;
    int t = m - c;
        if (f < m && f < t)
        {
            printf("F");
        }

        else if (m < f && m < t)
        {
            printf("M");
        }
        else if (t < m && t < f)
        {
            printf("T");
        }
    return 0;
}