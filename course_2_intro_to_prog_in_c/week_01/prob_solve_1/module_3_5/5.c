#include <stdio.h>
int main() 
{
    float i;
    printf("Enter number: ");
    scanf("%f", &i);

    float j;
    printf("Integer part: ");
    scanf("%f", &j);

    float sub = i - j;
    printf("Real part: %0.3f", sub);
    
    return 0;
}
