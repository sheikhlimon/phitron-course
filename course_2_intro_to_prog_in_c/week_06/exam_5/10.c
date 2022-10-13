#include<stdio.h>
#include<string.h>



int main()
{
    char str[] = "Hello";

    char *pos = strchr(str, "lox");

    if(!pos)
        printf("Not Found");
    else
        printf("Found at %d", pos-str);

    return 0;
}