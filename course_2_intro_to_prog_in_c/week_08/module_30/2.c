/**
*	author: sheikhlimon
*	created: 2022.06.07
**/

#include<stdio.h>
#include<string.h>


int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}