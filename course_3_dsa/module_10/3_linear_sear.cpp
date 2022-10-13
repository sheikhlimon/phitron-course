#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    char ch;
    cout << "Do you want to search(Y/N): ";
    cin >> ch;

    while (toupper(ch) == 'Y')
    {
        int checkValue;
        cout << "enter the value for search: ";
        cin >> checkValue;

        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == checkValue)
            {
                cout << "Index No: " << i << " Position: " << i + 1 << endl;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "Not Found" << '\n';
        }

        cout << "Do you want to search again(Y/N): ";
        cin >> ch;
    }

    return 0;
}