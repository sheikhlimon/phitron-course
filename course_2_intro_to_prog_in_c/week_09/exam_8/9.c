/**
*	author: sheikhlimon
*	created: 19.06.2022
*/

#include <stdio.h>
#include <string.h>

void check_palindrome(char str[])
{
    int n= strlen(str);
    
    int c = 0;

    for(int i=0; i<n/2; i++)
    {
        if(str[i] == str[n-i-1])
        continue;

        c+=1;

    if(str[i] < str[n-i-1])
        str[n-i-1] = str[i];
    else
        str[i] = str[n-i-1];

    }
    printf("%d", c);
}

int main()
{
    char a[100];
    scanf("%s", &a);

    check_palindrome(a);

    return 0;
}