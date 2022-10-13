#include <stdio.h>
int main()
{
    int tr, cs, rc, a = 0;
    scanf("%d", &tr);
    for (int i = 1; i <= tr; i++)
    {
        scanf("%d %d", &cs, &rc);
        if (cs + 2 <= rc)
        {
            a++;
        }
    }
    printf("%d", a);
    return 0;
}