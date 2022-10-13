/**
 *	author: sheikhlimon
 *	created: 17.06.2022
 */

#include <stdio.h>
#include <string.h>

void del(int *arr, int n, int pos)
{
    for (int i = pos-1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int pos;
    scanf("%d", &pos);

    del(arr, 5, pos);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}