#include <stdio.h>
#include <string.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

struct Interval{
    struct Time start;
    struct Time end;
};

void print(int hour, int minute)
{
    printf("%d:%d\n", hour, minute);
}

int main()
{
    struct Interval time;

    time.start.hour = 5;
    time.start.minute= 30;

    time.end.hour = 10;
    time.end.minute = 15;

    print(time.start.hour, time.start.minute);
    print(time.end.hour, time.end.minute);
    return 0;
}