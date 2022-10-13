/**
 *	author : sheikhlimon
 *	created : 12.05.2022 16:28:14
 **/

#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s", s);
    if (strcmp(s, "Hello,World!") == 0)
    {
        printf("AC");
    }
    else
    {
        printf("WA");
    }
    return 0;
}