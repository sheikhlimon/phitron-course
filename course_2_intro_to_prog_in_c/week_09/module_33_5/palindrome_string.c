/**
 *	author: sheikhlimon
 *	created: 15.06.2022
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 1;
    char str[40];

    gets(str);

    // check the string length
    int len = strlen(str);

    // divide by 2 to check if the number is even
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}