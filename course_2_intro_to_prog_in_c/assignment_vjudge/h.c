#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int c=a+b;
    if(c >= 10)
        printf("error");
    else
        printf("%d",a+b);
    return 0;
}