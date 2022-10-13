#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, c = 0, x, i, m = INT_MAX;
        cin >> n;
        long long a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            m = min(a[i], m);
        }

        for (i = 0; i < n; i++)
        {
            if (a[i] > m)
                c++;
        }
        cout << c << endl;
    }

    return 0;
}