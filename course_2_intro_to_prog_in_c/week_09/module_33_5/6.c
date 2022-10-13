/**
 *	author: sheikhlimon
 *	created: 14.06.2022
 */

#include <stdio.h>
#include <string.h>

void reverse_array(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int arr[10]={1, 2, 3, 4, 5};

    reverse_array(arr, 5);

    return 0;
}