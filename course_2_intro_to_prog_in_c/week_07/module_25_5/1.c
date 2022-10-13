#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[100];
    int class;
    int roll;
    struct Date dob;
};

int main()
{
    struct Student s1;
    char s[] = "Peter Paker";
    strcpy(s1.name, s);
    s1.roll = 23;
    

    printf("%s %d", s1.name, s1.roll);

    return 0;
}