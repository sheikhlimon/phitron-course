#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    int l, r, a, b;
    scanf("%d %d %s", &l, &r, &s);

    a = l - 1;
    b = r - 1;
    for (int i = a, j = b; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("%s", s);

    return 0;
}