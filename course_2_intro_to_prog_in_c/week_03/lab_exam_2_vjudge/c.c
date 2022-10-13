#include <stdio.h>
int main()
{
    int s, t, x;
    scanf("%d %d %d", &s, &t, &x);
    if (s < t)
    {
        if (s <= x && x < t)
            printf("Yes");
        else
            printf("No");
    }
    else
    {
        if (x < t || s <= x)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}