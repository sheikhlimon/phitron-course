/**
 *	author : sheikhlimon
 *	created : 12.05.2022 16:23:15
 **/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], t[100];
    scanf("%s %s", s, t);
    if (strcmp(s, t) < 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}