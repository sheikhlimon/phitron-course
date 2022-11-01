#include <stdio.h>
#include <string.h>

int main()
{
    int t, n;
    int a[100000];
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int d = 100000;
        for (int i = 1; i < n; i++)
        {
            int s = a[i] - a[i - 1];
            if (s < d)
            {
                d = s;
            }
        }
        printf("%d\n", d);
    }

    return 0;
}