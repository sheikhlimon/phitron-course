#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_reverse_sorted(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] < a[i + 1])
            return false;
    return true;
}

void sort(int n, int a[])
{
    if (is_reverse_sorted(n, a))
        return;
    else
        for (int steps = 0; steps < n; steps++)
        {
            for (int i = steps + 1; i < n; i++)
            {
                if (a[steps] < a[i])
                {
                    int temp = a[steps];
                    a[steps] = a[i];
                    a[i] = temp;
                }
            }
        }
}


int main()
{
    int n;
    scanf("%d", &n);
    int a[] = {4, 5, 3, 2, 1};
    sort(n, a);
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    if (is_reverse_sorted(n, a))
        printf("\ny");
    else
        printf("n");
    return 0;
}