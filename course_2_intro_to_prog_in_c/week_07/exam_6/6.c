#include <stdio.h>
#include <string.h>

typedef struct
{
    int min;
    int max;
} minMax;

minMax getMinMax(int a, int b)
{
    minMax s;
    if (a > b)
    {
        s.min = b;
        s.max = a;
    }
    else
    {
        s.min = a;
        s.max = b;
    }
    return s;
}

int main()
{
    int x, y;
    minMax result;

    printf("Enter 2 nums: \n");
    scanf("%d %d", &x, &y);

    result = getMinMax(x, y);

    printf("Min = %d\nMax = %d", result.min, result.max);

    return 0;
}