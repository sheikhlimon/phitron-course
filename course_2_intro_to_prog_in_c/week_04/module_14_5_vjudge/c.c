/**
 *	author : sheikhlimon
 *	created : 12.05.2022 12:31:29
 **/

#include <stdio.h>
int main()
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] != 0)
        {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}