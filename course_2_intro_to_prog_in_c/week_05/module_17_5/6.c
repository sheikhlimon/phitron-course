/**
 *	author : sheikhlimon
 *	created : 17.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void rotate(int n, int a[])
{
    int temp = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
}

void rotateByK(int n, int a[], int k)
{
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        rotate(n, a);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d", &k);
    rotateByK(n, a, k);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}