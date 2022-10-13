/**
 *	author: sheikhlimon
 *	created: 19.06.2022
 */

#include <stdio.h>
#include <string.h>

void odd_even()
{
    int n = 5;
    if (n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    odd_even();

    return 0;
}