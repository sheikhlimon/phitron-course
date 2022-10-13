/**
*	author : sheikhlimon
*	created : 16.05.2022
**/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int max(int arr[], int n)
{
    //initialize maximum element
    int max = arr[0];

    //traverse array elements from second index
    //compare every element with current max
    for(int i =1; i<n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {10, 324, 79, 39, 9873};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum in given array is %d", max(arr, n));

    return 0;
}