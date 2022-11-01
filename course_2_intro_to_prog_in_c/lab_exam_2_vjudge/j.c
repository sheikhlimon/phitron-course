#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int c = n%10;
    int a = n/100;
    int b = n/10%10;
    int abc = a*100+b*10+c; 
    int bca = b*100+c*10+a;
    int cab= c*100+a*10+b; 
    int ans = abc+bca+cab;
    printf("%d", ans);
    return 0;
}