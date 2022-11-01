#include <stdio.h>
#include <string.h>

int gcd(int a, int b)
{
    int gcd;
    for (int i = 1; i <= a && i <= b; ++i)
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    return gcd;
}
int main()
{
    int n = 10;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int ans;
    for (int i = 0; i < n - 1; ++i)
    {
        if (i == 0)
        {
            ans = gcd(arr[i], arr[i + 1]);
        }
        else
        {
            ans = gcd(ans, arr[i + 1]);
        }
    }
    printf("%d", ans);
}