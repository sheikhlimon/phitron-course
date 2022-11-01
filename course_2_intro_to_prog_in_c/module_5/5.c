#include <stdio.h>
int main() 
{
    int score;

    printf("Enter score(0-100): ");
    scanf("%d", &score);
    
    if(score >= 80)
        printf("A+");
    else if(score >= 70)
        printf("A");
    else if(score >= 60)
        printf("B");
    else if(score >= 50)
        printf("C");
    else if(score >= 40)
        printf("D");
    else 
        printf("F");
    
    return 0;
}

