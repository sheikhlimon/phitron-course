/**
 *	author : sheikhlimon
 *	created : 13.05.2022
 **/

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int c = 1;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        int c1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == i || s[j] == i + 32)
            {
                c1 = 1;
            }
        }
        if (c1 == 0)
        {
            c = 0;
            break;
        }
    }
    if (c == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}