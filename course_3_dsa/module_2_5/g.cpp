#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int f = a * b;
    int s = c * d;

    if (f > s)
        cout << f;
    else
        cout << s;

    return 0;
}