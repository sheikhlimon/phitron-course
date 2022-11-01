#include<stdio.h>
#include<string.h>

void swap(int a, int b)
{
    int temp = a;
    a = b; 
    b = temp;
}

int main()
{
    int a = 100;
    int b = 200;

    printf("before swap: value of a: %d \n", a);
    printf("before swap: value of b: %d \n", b);

    //call function to swap values
    swap(a, b);

    printf("after swap: value of a: %d \n", a);
    printf("after swap: value of b: %d \n", b);

    return 0;
}