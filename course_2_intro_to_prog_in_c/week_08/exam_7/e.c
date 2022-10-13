/**
 *	author: sheikhlimon
 *	created: 11.06.2022
 */

#include <stdio.h>
#include <string.h>


int main()
{
    int n, sum;
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}