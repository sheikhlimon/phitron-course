/**
 *	author: sheikhlimon
 *	created: 18.06.2022
 */

#include <stdio.h>
#include <string.h>

int make_average(int *arr, int n)
{
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        avg = sum / n;
    }
    return avg;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int avg = make_average(arr, 5);

    printf("%d", avg);

    return 0;
}