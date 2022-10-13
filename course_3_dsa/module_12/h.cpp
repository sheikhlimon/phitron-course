#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    auto A = s.find("A");
    auto Z = t.find("Z");

    cout << s.size() - A - Z;

    return 0;
}