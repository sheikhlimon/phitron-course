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

int main()
{
    int n = 4;
    int a[] = {6, 8, 3, 1};
    if (is_reverse_sorted(n, a))
        printf("y");
    else
        printf("n");
    return 0;
}