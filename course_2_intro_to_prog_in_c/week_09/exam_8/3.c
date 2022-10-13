/**
 *	author: sheikhlimon
 *	created: 18.06.2022
 */

#include <stdio.h>
#include <string.h>

int check_zero(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[] = "01000110";
    int n = check_zero(str);

    printf("%d", n);

    return 0;
}