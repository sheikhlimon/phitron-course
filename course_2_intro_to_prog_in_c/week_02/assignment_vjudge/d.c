#include<stdio.h>
int main()
{
    int n;
    double sum = 0, m, a, b;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &a, &b);
        m = a*b; 
        sum+=m;
    }
    printf("%.3lf", sum);
    return 0;
}