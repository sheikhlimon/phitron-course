/**
 *	author : sheikhlimon
 *	created : 07.05.2022 19:52:06
 **/

#include <stdio.h>
int main()
{
    int a =10;
    int *p = &a;
    int **q = &p;
    printf("%d", **q);
    return 0;
}

