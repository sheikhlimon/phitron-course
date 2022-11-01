#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int mul;
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &mul);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] * ar[j] == mul)
            {
                f = 1;
            }
        }
    }
    if (f == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}