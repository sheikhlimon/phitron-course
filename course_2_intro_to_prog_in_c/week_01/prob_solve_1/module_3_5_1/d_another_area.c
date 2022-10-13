#include <stdio.h>
int main() 
{
    int a, b, h;
    scanf("%d\n%d\n%d",&a, &b, &h);
    //first add the bases then multiply by height and then divide by 2
    a = (a+b)*h/2;
    printf("%d", a);
    return 0;
}
