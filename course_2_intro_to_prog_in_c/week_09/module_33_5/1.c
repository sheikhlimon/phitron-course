/**
*	author: sheikhlimon
*	created: 14.06.2022
*/

#include <stdio.h>
#include <string.h>

int get_max(int x, int y)
{
    return (x > y) ? y : x;
}

int main()
{
    int a = 5, b = 9;
    int max = get_max(a, b);
    printf("%d", max);

    return 0;
}