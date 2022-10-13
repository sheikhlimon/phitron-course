/**
 *	author : sheikhlimon
 *	created : 12.05.2022 11:35:35
 **/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        bool found = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                printf("%d\n", i + 1);
                found = true;
            }
        }
        if (!found)
        {
            if (arr[0] != arr[1])
            {
                printf("1\n");
            }
            else
            {
                printf("%d\n", n);
            }
        }
    }
    return 0;
}