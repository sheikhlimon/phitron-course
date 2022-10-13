/**
*	author : sheikhlimon
*	created : 16.05.2022
**/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int areaOfRec(int len, int wid)
{
    return len * wid;
}

int main()
{
    int n1, n2, area;
    scanf("%d %d", &n1, &n2);

    area = areaOfRec(n1, n2);

    printf("%d", area);

    return 0;
}