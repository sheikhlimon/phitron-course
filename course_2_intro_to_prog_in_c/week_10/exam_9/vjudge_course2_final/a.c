#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n != 42)
        {
            printf("%d\n", n);
        }
        else
        {
            break;
        }
    }
}