#include <stdio.h>
#include <string.h>

struct Fun
{
    int sum;
};

int main()
{
    struct Fun *p,num;
    p = &num;
    scanf("%d", &p->sum);

    printf("%d", p->sum);
    return 0;
}