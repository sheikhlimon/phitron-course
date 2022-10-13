#include <stdio.h>
#include <string.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct Time Time = {18, 30, 0};

    printf("%d:%d:%d", Time.hour%24,Time.minute%60,Time.second%60);
}