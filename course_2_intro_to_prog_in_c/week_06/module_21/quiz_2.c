#include<stdio.h>
#include<string.h>

int fun(int a,int b) {

    int ans=1;

    for(int i=1;i<=b;i++) {

        ans*=a;

    }

    return ans;
}

int main()
{
    int a, b, ans=1; 
    scanf("%d %d", &a, &b);

    fun(a,b);
    printf("%d", ans);
    return 0;
}