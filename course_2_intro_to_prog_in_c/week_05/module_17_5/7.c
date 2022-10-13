/**
 *	author : sheikhlimon
 *	created : 18.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void Truncate(char s[], int k)
{
    int n = strlen(s);
    if (k < 0 || k > n)
        return;

    s[k] = '\0';
}

int main()
{
    char s[100];
    scanf("%s", s);

    int k;
    scanf("%d", &k);

    Truncate(s, k);

    printf("%s", s);
    return 0;
}