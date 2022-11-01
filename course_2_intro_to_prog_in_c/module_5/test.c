#include<stdio.h>
int main() {
    int num;
    int total;
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        int t;
        scanf("%d", &t);
        if(t<0)
        {
            total++;
        }
    }
    printf("%d\n", total);
    
    return 0;
}
