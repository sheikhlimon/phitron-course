/**
 *	author : sheikhlimon
 *	created : 11.05.2022 00:06:29
 **/

#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];

    // input string from user
    printf("Enter any string");
    gets(str);

    printf("Orginial string = %s\n", str);

    // find the reverse of string
    strrev(str);

    printf("Reverse string = %s", str);
    return 0;
}