#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n)
{
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            i++;
            count++;
        }
        cout << arr[i] << " => " << count << endl;
    }
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

    frequency(arr, n);

    return 0;
}