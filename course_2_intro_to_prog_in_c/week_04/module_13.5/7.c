/**
*	author : sheikhlimon
*	created : 10.05.2022 23:51:31
**/

#include<stdio.h>
int main()
{
    int arr[100];
    int size, i, toSearch, found;

    //input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    //input elements of array
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    //assume that element does not exists in array
    found = 0;

    for(i=0; i<size; i++)
    {
        //if element is found in array then raise found flag and terminate from loop
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    
    //if element is not found in array
    if(found ==1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else 
    {
        printf("\n%d is not found in the array", toSearch);
    }
    return 0;
}