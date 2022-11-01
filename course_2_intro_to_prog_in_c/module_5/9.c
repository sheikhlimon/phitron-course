#include <stdio.h>
#include <conio.h>
int main() 
{
    int i,sum=0,num; //variables
    printf("Enter the vaule of N (limit): ");
    scanf("%d", &num);
    printf("\n");
    for(i=1; i<=num; i++)
    {
        if(i!=num)
            printf("%d + ", i);
        else
            printf("%d ", i);
        sum=sum+i;
    }
    
    printf("= %d", sum);
    
    return 0;
}

