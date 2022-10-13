#include <stdio.h>
#include <string.h>

void makeArray(int n, int squares[])
{
    for (int i = 1; i <= n; i++)
    {
        squares[i - 1] = i * i;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int squares[n];
    makeArray(n, squares);
    for(int i = 0; i<n; i++)
    {
        printf("%d ", squares[i]);
    }
    return 0;
}