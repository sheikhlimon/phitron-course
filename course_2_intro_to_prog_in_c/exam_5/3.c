#include <stdio.h>
#include <string.h>
void makeStrCopy(char in[], char out[])
{
    int i;
    for(i=0; in[i] != '\0'; i++)
    {
        out[i] = in[i];
    }
    out[i] = '\0';
}

int main()
{
    char Str[100], CopyStr[100];

    printf("\n Please Enter any text :  ");
    gets(Str);

    makeStrCopy(Str, CopyStr);

    printf("\n Original   = %s", Str);
    printf("\n Copied into CopyStr = %s", CopyStr);

    return 0;
}
