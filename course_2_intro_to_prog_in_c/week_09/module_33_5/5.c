/**
 *	author: sheikhlimon
 *	created: 14.06.2022
 */

#include <stdio.h>
#include <string.h>

void string_concat(char s1[], char s2[])
{
    int i;
    //could use strlen function to find the length of string too
    // int len = strlen(s1);
    int len = 0;
    //caluculating length of first string
    for (i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }

    //concatenating second string to first string
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[len + i] = s2[i];
    }
    s1[len + i] = '\0';
}

int main()
{
    char a[] = "hello";
    char b[] = "bye";
    string_concat(a, b);
    printf("%s", a);

    return 0;
}