/**
 *	author : sheikhlimon
 *	created : 07.05.2022 19:52:06
 **/

#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6}, min=0;

    for(int i=0;i<6;i++) {

        if(arr[i]<min) {

            min=arr[i];
        }
    }
    printf("%d", min);
    return 0;
}

