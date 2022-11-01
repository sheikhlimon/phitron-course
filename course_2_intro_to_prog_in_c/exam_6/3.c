#include<stdio.h>
#include<string.h>

struct Student{
char *name[50];
};

int main(){
    struct Student s1;
    //accessing members of the struct
    s1.name[0] = "itzme";

    printf("Name: %s",s1.name[0]);

return 0;
}