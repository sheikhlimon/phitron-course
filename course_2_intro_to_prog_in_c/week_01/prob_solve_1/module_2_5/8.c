#include <stdio.h>
int main() 
{
    int height, width, area, peri; // get area and perimeter of a rectangle
    //enter height of the recantangle
    printf("Enter the height of rectangle: ");
    scanf("%d", &height);

    //enter width of the rectangle
    printf("Enter the width of rectangle: ");
    scanf("%d", &width);

    //calculate area and perimeter
    area = height * width;
    peri = 2 * (height + width);

    //print the result
    printf("\nArea is %d", area);
    printf("\nPerimeter is %d", peri);

    return 0;
}

