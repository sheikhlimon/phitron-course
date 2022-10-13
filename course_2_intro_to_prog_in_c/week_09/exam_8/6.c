/**
*	author: sheikhlimon
*	created: 18.06.2022
*/

#include <stdio.h>
#include <string.h>


int main()
{
    int a=10;

    int *P=&a;
    int **Q=&P;
    int ***R=&Q;
    ***R = 20;

    printf("%d", ***R);
    return 0;
}