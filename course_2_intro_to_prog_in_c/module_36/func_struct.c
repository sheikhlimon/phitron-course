/**
*	author: sheikhlimon
*	created: 21.06.2022
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void fun(struct Student *s)
{
    s -> marks = 1000;
}

void print_struct(struct Student a)
{
    printf("%s %d %d\n", a.name, a.roll, a.marks);
}

int main()
{
    struct Student a = {"Rakib", 21, 82};

    fun(&a);
    print_struct(a);
    return 0;

    return 0;
}