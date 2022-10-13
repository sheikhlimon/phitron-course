/**
 *	author: sheikhlimon
 *	created: 15.06.2022
 */

#include <stdio.h>
#include <string.h>

void reverse(int *arr, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {2, 3, 3, 5, 5};

    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}