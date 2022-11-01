/**
 *	author: sheikhlimon
 *	created: 15.06.2022
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);

    int i = 0, flag = 0;
    int j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("No");
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if (flag == 0)
    {
        printf("Yes");
    }

    return 0;
}