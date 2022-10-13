#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[21], b[21];
    scanf("%s %s", a, b);
    char c[21], d[21];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        scanf("%s %s", c, d);
        int val = strcmp(a, c);
        int val2 = strcmp(b, d);
        if (val == 0 && val2 == 0)
        {
            count++;
        }
    }
    if (count > 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}