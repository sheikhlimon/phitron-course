#include<stdio.h>
int main()
{
    int n, i = 1, j = 1, number = 1;
    scanf("%d", &n);
    while(i < n)
    {
        i++;
        while(j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
    }
    return 0;
}