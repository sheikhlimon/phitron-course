/**
 *	author: sheikhlimon
 *	created: 19.06.2022
 */

#include <stdio.h>
#include <string.h>

void array_reverse(int *a, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
}

void change_array(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int b[n];

    array_reverse(a, n);
    change_array(a, b, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}