#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x >= 90)
        printf("expert\n");
    else if (x >= 70)
        printf("%d", 90 - x);
    else if (x >= 40)
        printf("%d", 70 - x);
    else
        printf("%d", 40 - x);
    return 0;
}