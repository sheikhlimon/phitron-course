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
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[0] < s[i] || s[0] > s[i])
        {
            s[0] = s[i];
        }
        if (s[i] == s[i + 1])
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}