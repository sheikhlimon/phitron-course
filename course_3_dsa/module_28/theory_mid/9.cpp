#include <stdio.h>
#include <string.h>

void Push(char x);
char Pop(void);

int top = -1;
char Stack[4] = {"\0"};
int main()
{
    char Str1[4] = {"\0"}; // initialize Str1 to null
    char Str2[4] = {"\0"}; // initialize Str2 to null
    int i;                 // initialize int variable i
    strcpy(Str1, "CSE");   // copy “CSE” to Str1
    for (i = 0; i < 3; ++i)
    {
        Push(Str1[i]); // push all characters one by one into Str1
    }
    for (i = 0; i < 3; ++i)
    {
        Str2[i] = Pop(); // pop all characters one by one and put into Str2
    }
    printf("%s", Str2); // print result will be ESC
    return 0;
}

void Push(char x)
{
    Stack[++top] = x;
    return;
}
char Pop(void)
{
    return Stack[top--];
}