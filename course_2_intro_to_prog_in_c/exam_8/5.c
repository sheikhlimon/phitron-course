/**
 *	author: sheikhlimon
 *	created: 18.06.2022
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bool check_array(int *arr, int n)
{
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4};
    bool ans = check_array(arr, 5);

    if (ans)
        printf("yes");
    else
        printf("no");

    return 0;
}