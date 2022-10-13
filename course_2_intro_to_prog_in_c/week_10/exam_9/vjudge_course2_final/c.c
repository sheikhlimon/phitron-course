#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int l = 0, r = n - 1;
        int k = 0;
        while (l <= r)
        {
            if (k % 2 == 0)
            {
                printf("%d ", a[l]);
                l++;
            }
            else
            {
                printf("%d ", a[r]);
                r--;
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}