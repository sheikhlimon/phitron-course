#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0);

    int arr[50];
    int size;
    cout << "array size: ";
    cin >> size;
    cout << "array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "given array: ";
    printArray(arr, size);

    int pos;
    cout << "enter position of deletion: ";
    cin >> pos;

    if (pos < 0 || pos > size-1)
    {
        cout << "invalid index";
    }
    else
    {
        if(pos == size-1) size--;
        else
        {
            for(int i=pos+1; i<size; i++)
            {
                arr[i-1] = arr[i];
            }
            size--;
        }
    }

    cout << "array after deletion: ";
    printArray(arr, size);

    return 0;
}