#include <stdio.h>
#include <string.h>

int main()
{
    char s[51];
    scanf("%s", s);
    int c = 0, m;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
            c++;
    }
    while (1)
    {
        m = len / 2 + 1;
        if (c >= m)
            break; 
        len--;
    }
    printf("%d", len);
    return 0;
}