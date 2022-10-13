/**
*	author : sheikhlimon
*	created : 12.05.2022 11:16:36
**/

#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d", &n);
    int arr[101];
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &k);
        arr[k] = i;
    }
    for(int i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}