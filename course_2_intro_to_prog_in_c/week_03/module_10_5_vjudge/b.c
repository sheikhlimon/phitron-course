#include <stdio.h>
#include <limits.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n >= INT_MIN && n <= INT_MAX)
        printf("Yes");
    else
        printf("No");
    return 0;
}
