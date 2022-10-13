#include <stdio.h>
#include <string.h>

int main()
{
    FILE *logFile = fopen("log.txt", "w");
    fprintf(logFile, "Hello at 12:00");

    return 0;
}