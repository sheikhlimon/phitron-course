#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    if (add >= sub && add >= mul)
        printf("%d", add);
    else if (sub >= add && sub >= mul)
        printf("%d", sub);
    else
        printf("%d", mul);
    return 0;
}