/**
*	author: sheikhlimon
*	created: 21.06.2022
*/

#include <stdio.h>
#include <string.h>


int main()
{
    int n,sum=0,a;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        sum+=a;
    }
    printf("sum: %d", sum);

    return 0;
}