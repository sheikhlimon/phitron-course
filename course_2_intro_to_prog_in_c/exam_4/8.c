#include <stdio.h>
#include <string.h>

void stringCat(char a[], char b[], char out[])
{
    out = strcat(a, b);
    printf("%s", out);
}

int main()
{
    char a[100];
    scanf("%s", &a);
    char b[100];
    scanf("%s", &b);
    char out[100];
    stringCat(a, b, out);
    return 0;
}