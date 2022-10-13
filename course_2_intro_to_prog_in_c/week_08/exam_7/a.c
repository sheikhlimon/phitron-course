/**
 *	author: sheikhlimon
 *	created: 2022.06.11
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}