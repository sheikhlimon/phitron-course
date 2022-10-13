#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if(a+b == c || b+c == a || a+c == b)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }

    return 0;
}