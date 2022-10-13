#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t);
    
    for(int cs=0; cs<t; cs++) {
        int normal_rev;
        int ad_rev;
        int ad_cost;

        scanf("%d %d %d", &normal_rev, &ad_rev, &ad_cost);

        int ad_profit = ad_rev - ad_cost;

        if(ad_profit > normal_rev)
        {
            printf("advertise");
        }
        else if(ad_profit == normal_rev)
        {
            printf("does not matter");
        }
        else
        {
            printf("do not advertise");
        }
    }
    return 0;
}

