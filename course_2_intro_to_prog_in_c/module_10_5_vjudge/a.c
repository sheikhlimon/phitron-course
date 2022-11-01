#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int r = a-(b*2);
    if(r >= 0)
        printf("%d", r);
    else
        printf("0");
    return 0;
}