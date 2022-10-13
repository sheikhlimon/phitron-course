#include <stdio.h>
int main()
{
    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);
    int t = (a + k - 1) % n;
    if (t == 0)
        t = n;
    printf("%d", t);
    return 0;
}