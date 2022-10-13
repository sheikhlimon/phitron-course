#include <bits/stdc++.h>
using namespace std;

void difference(int a[], int b[], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == n)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    difference(a, b, m, n);

    return 0;
}