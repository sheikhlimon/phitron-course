/**
*	author : sheikhlimon
*	created : 09.05.2022 22:39:27
**/

#include<stdio.h>
int main()
{
    int i,n;
    int arr[100];
    scanf("%d", &n);
    printf("Input elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    //storing largest number in arr[0]
    for(i=1; i<n; i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
    }
    printf("Maximum is %d", arr[0]);
    return 0;
}