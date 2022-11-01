/**
*	author : sheikhlimon
*	created : 13.05.2022
**/

#include<stdio.h>
#include<string.h>
int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int a[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++)
    {
        int b = (i+d)%n;
        printf("%d ", a[b]);
    }
    return 0;
}