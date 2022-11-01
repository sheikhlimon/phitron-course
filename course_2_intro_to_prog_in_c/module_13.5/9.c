/**
 *	author : sheikhlimon
 *	created : 11.05.2022 00:27:09
 **/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len, vowel, consonant;

    // input string from user
    printf("Enter string from user");
    gets(str);

    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            switch (str[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel++;
                break;
            default:
                consonant++;
            }
        }
    }

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant= %d\n", consonant);
    return 0;
}