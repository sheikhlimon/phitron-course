#include <stdio.h>
#include <string.h>
int main()
{

    char s[1000];
    gets(s);
    for (int i = 0; s[i + 1] != '\0'; i++)
    {
        for (int j = i; s[j] != '\0'; j++)
        {
            if (s[i] != '+' && s[j] != '+')
            {
                if (s[j] < s[i])
                {
                    int temp = s[j];
                    s[j] = s[i];
                    s[i] = temp;
                }
            }
        }
    }
    printf("%s\n", s);

    return 0;
}