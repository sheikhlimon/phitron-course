#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0);

    int arr[50];
    int n;
    cout << "Array Size: ";
    cin >> n;
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given array: ";

    printArray(arr, n);

    return 0;
}