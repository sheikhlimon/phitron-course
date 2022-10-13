#include <stdio.h>
int main()
{
    int n, p, a, count = 0;
    scanf("%d %d", &n, &p);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a < p)
            count++;
    }
    printf("%d", count);
    return 0;
}