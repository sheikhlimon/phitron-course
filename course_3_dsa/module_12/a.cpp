#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int n, count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        if (n >= 10)
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}