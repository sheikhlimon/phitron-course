/**
 *	author: sheikhlimon
 *	created: 14.06.2022
 */

#include <stdio.h>
#include <string.h>

int get_length(char arr[])
{
    int len = 0;
    while (arr[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char arr[10] = "hellofd";

    int len = get_length(arr);

    printf("%d", len);

    return 0;
}