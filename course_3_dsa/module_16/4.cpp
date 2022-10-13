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
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "before sort: ";
    printArray(arr, n);

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        cout << endl
             << "iteration: "
             << i << " key: " << key << endl;
        int j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            printArray(arr, n);
            j--;
        }
        arr[j + 1] = key;
        printArray(arr, n);
    }

    cout << "after sort: ";
    printArray(arr, n);

    return 0;
}