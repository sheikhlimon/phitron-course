#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;

    if(b-a == c - b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}