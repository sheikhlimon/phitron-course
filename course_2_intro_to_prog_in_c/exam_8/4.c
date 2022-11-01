/**
*	author: sheikhlimon
*	created: 18.06.2022
*/

#include <stdio.h>
#include <string.h>

void foo();
void bar();

int main()
{
    foo();

    return 0;
}

void foo()
{
    printf("foo\\n");
    bar();
}

void bar()
{
    printf("bar\\n");
}