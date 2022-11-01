#include <stdio.h>
#include <string.h>

void sort(int n, int a[])
{
    for (int steps = 0; steps < n; steps++)
    {
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] < a[i - 1])
            {
                int temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
    }
}

int main()
{
    int n = 10;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    sort(n, a);
    for(int i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}