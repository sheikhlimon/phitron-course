#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int l, int r)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            return binarySearch(arr, x, mid + 1, r);
        }
        else
        {
            return binarySearch(arr, x, l, mid - 1);
        }
    }
    return -1;
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

    int x;
    cout << "enter target to search: ";
    cin >> x;

    int result = binarySearch(arr, x, 0, n - 1);

    if (result != -1)
    {
        cout << "index no: " << result << " postion no: " << result + 1 << endl;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}