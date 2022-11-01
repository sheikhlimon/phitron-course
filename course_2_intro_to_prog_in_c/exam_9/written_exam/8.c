#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int columns = 1; 
    for(int i=1; i<n*2; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            printf("*");
        }
        if(i<n)
        {
            columns++;
        }
        else
        {
            columns--;
        }

        printf("\n");
    }

    return 0;
}