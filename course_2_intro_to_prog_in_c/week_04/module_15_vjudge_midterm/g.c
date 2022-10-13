/**
 *	author : sheikhlimon
 *	created : 13.05.2022
 **/

#include <stdio.h>
#include <string.h>
int main()
{
    int t, len;
    char arr[1001];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", arr);
        len = strlen(arr);
        for (int i = 0; i < len; i++)
        {
            if (i % 2 == 1 || i == 0)
            {
                printf("%c", arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}