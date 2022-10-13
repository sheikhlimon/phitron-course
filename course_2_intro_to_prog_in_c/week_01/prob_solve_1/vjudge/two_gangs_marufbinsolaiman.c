#include <stdio.h>
int main() 
{
    int harry, larry, midPoint,cans,harryScore,larryScore;

    scanf("%d %d",&harry,&larry);
    midPoint = (harry+larry)%2;
    cans = (harry+larry) - midPoint;
    harryScore = cans-harry;
    larryScore = cans-larry;

    if(harry+larry<=11) {
        printf("%d %d",harryScore,larryScore);
    }
    
    return 0;
}

