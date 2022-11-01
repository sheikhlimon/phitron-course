/**
 *	author : sheikhlimon
 *	created : 10.05.2022 20:29:54
 **/

#include <stdio.h>
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;

    // input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    // input elements in array
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

        // initially initialize frequencies to -1
        freq[i] = -1;
    }

    for(i=0;i<size;i++)
    {
        count = 1;
        for(j=j+1;j<size;j++)
        {
            //if duplicate element is found
            if(arr[i]==arr[j])
            {
                count++;

                //make sure not to count frequency of same element again
                freq[j]=0;
            }
        }
        //if frequency of current element is not counted
        if(freq[i]!=0)
        {
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array: \n");
    for(i=0;i<size;i++)
    {
        if(freq[i]!=0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }

    return 0;
}