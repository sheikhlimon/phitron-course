#include <stdio.h>
#include <string.h>

char *Strchr(char *str, char c)
{
    char *position = NULL;
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            position = &str[i];
            break;
        }
    }
    return position;
}

int main()
{
    char str[] = "Hello";
    int c = 'l';
    int d = Strchr(str, c);
}