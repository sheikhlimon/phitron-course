#include <stdio.h>
int main() 
{
    int d;
    printf("Input no. of days: ");
    scanf("%d", &d);

    int y = d/365;

    int m = (d-y*365) / 30;

    int dd = (d-y*365-m*30);

    printf("%d Year(s)", y);
    printf("%d Month(s)", m);
    printf("%d Day(s)", dd);

    
    return 0;
}

