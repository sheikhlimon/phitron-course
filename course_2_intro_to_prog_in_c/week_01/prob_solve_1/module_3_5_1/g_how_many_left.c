#include <stdio.h>
int main() 
{
    int H, W, h, w;
    scanf("%d %d\n%d %d", &H, &W, &h, &w);

    int row = H - h;
    int col = W - w;
    
    int l = row*col;

    printf("%d", l);
    
    return 0;
}

