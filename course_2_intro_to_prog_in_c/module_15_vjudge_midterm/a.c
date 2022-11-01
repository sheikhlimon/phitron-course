/**
 *	author : sheikhlimon
 *	created : 13.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char arr[110];
    scanf("%s", arr);
    long len = strlen(arr);
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        bool appears = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                appears = false;
                break;
            }
        }
        if (appears)
        {
            c++;
        }
    }

    if (c % 2 == 1)
    {
        printf("IGNORE HIM!\n");
    }
    else
    {
        printf("CHAT WITH HER!\n");
    }
    return 0;
}