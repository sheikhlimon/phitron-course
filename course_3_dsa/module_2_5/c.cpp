#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    string op;
    cin >> a >> op >> b;

    if (op == "+")
    {
        cout << a + b;
    }
    else
    {
        cout << a - b;
    }

    return 0;
}