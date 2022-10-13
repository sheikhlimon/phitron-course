/**
 *	author : sheikhlimon
 *	created : 12.05.2022
 **/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[110], b[110];
    scanf("%s%s", &a, &b);
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - ('a' - 'A');
        if (b[i] >= 'a' && b[i] <= 'z')
            b[i] = b[i] - ('a' - 'A');
        if (a[i] > b[i])
        {
            printf("1");
            return 0;
        }
        else if (a[i] < b[i])
        {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}