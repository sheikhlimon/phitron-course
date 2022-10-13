#include <stdio.h>
int main() 
{
    //enter length and get feet and inches in return
    int length, feet, inches, foot; // take four interger
    foot = 12;
    printf("Enter height in inches: ");
    scanf("%d", &length);
    
    feet = length / foot;
    inches = length % foot;

    printf("\nYour height is %d feet %d inches",feet,inches);

    return 0;
}

