#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(b != a) {
        int c = a - b;
        c = c*(32);
        printf("%d", c);
    }
    else if(a == b){
       printf("1");
    }
    return 0;
}