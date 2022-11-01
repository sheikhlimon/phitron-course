/**
 *	author: sheikhlimon
 *	created: 21.06.2022
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");

    FILE *outputFile;
    outputFile = fopen("output.txt", "w");
    while (1)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, outputFile);
    }

    return 0;
}