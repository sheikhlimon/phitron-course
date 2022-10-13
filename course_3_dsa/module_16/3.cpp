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

    cout << "Before Sort: ";
    printArray(arr, n);

    // step 1 : Finding Max
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // step 2 : Initialization of 'count' array
    int count[max + 1];

    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // step 3 : Frequency Calculation
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    cout << "Frequency: ";
    printArray(count, max + 1);

    // step 4 : Cumulative Sum
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    cout << "Cumulative Sum: ";
    printArray(count, max + 1);

    // step 5 : Final Array --> Backward Traversal of Basic Array
    int final[n]={0};
    for (int i = n - 1; i >= 0; i--)
    {
        count[arr[i]]--;
        int k = count[arr[i]];
        final[k] = arr[i];
        printArray(final, n);
    }

    cout << "After Sort: ";
    printArray(final, n);

    return 0;
}