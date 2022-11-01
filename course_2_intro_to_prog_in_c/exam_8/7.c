/**
 *	author: sheikhlimon
 *	created: 19.06.2022
 */

#include <stdio.h>
#include <string.h>

int check_swap(int *arr, int n)
{
    int swaps=0;
    for (int pos = 0; pos < n - 1; pos++)
    {
        for (int check = pos + 1; check < n; check++)
        {
            if (arr[check] < arr[pos])
            {
                int temp = arr[check];
                arr[check] = arr[pos];
                arr[pos] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}

int main()
{
    int arr[] = {2, 1, 3, 4, 5};
    int n = check_swap(arr, 5);
    printf("%d", n);
    return 0;
}