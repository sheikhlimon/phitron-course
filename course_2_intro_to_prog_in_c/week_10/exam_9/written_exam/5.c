#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int count[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count[s[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}