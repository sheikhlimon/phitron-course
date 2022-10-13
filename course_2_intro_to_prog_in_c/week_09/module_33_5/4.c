/**
*	author: sheikhlimon
*	created: 14.06.2022
*/

#include <stdio.h>
#include <string.h>

void string_copy(char str2[], char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';

    //second method by using strlen function
    // int len = strlen(str);
    // for(int i=0; i<len; i++)
    // {
    //     str2[i] = str[i];
    // }
    // str2[len] = '\0';
}

int main()
{
    char a[] = "ello";
    char b[10];

    string_copy(b, a);
    printf("%s", b);
    return 0;
}