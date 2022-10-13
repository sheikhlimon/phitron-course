#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int l, int r)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
    cout << "enter value: ";
    cin >> x;

    int result = binarySearch(arr, x, 0, n - 1);
    if (result != -1)
    {
        cout << "index: " << result;
    }
    else
    {
        cout << "not found";
    }

    return 0;
}