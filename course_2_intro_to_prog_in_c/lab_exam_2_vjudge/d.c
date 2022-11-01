#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[100001];
    scanf("%s", &str);
    int a, d = 0;
    for (int i = 0; i < n; i++)
        if (str[i] == 'A')
            a++;
        else
            d++;
    if (a > d)
        printf("Anton");
    if (a < d)
        printf("Danik");
    if (a == d)
        printf("Friendship");
    return 0;
}