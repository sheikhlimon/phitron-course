#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, i, j, arr[10][10];
    cin >> row >> col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cin >> arr[i][j];
    }
    cout << endl;
    for (i = 0; i < row; i++)
    {
        for (j = i + 1; j < col; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i][j] = -1;
            }
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}