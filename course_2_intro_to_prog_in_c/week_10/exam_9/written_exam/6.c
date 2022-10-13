#include <stdio.h>
#include <string.h>

void change_values(int *ar, int n, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        ar[i] = 0;
    }
}

int main()
{
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    change_values(ar, n, l, r);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}