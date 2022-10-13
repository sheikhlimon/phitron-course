#include <stdio.h>
int main() 
{
    int i,j;

    scanf("%d %d", &i, &j);

    if(i == 5 || j == 5)
        printf("true");
    else if(i+j == 5 || i-j == 5)
        printf("true");
    
    return 0;
}

