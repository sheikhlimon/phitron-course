#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    if(n > 15)
    {
        cout << (n*800)-(n/15)*200;
    }
    else
    {
        cout << n*800;
    }

    return 0;
}