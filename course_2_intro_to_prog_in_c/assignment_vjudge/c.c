#include<stdio.h>
 
int main()
{
    int t[1000],i,n,c=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &t[i]);
    }
     for(i=0; i<n; i++)
    {
        if(t[i] < 0)
         c++;
    }
         printf("%d",c);
    return 0;
}