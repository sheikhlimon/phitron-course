/**
 *	author : sheikhlimon
 *	created : 11.05.2022 00:46:33
 **/

#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char toSearch;
    int i;

    // input string and character to search from user
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();

    // run loop till the last character of string
    i = 0;
    while (str[i] != '\0')
    {
        // if character is found in string
        if (str[i] == toSearch)
        {
            printf("'%c' is found at index %d\n", toSearch, i);
        }
        i++;
    }
    return 0;
}