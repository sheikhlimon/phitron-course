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

    int pos, value;
    cout << "enter position of insetion: ";
    cin >> pos;
    cout << "enter value: ";
    cin >> value;

    if (pos < 0 || pos > size)
    {
        cout << "invalid index";
    }
    else
    {
        // O(n)
        // for (int i = size - 1; i >= n; i--)
        // {
        //     arr[i + 1] = arr[i];
        // }

        // O(1)
        arr[size] = arr[pos];
        arr[pos] = value;
    }

    cout << "array after insertion: ";
    printArray(arr, size + 1);

    return 0;
}
