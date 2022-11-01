/**
 *	author: sheikhlimon
 *	created: 16.06.2022
 */

#include <stdio.h>
#include <string.h>

void insert(int *arr, int n, int pos, int val)
{
    for (int i = n-1; i >= pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos - 1] = val;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int pos, val;
    scanf("%d %d", &pos, &val);
    insert(arr, 5, pos, val);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}