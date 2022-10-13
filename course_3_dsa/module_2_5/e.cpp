#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, x, y;
    cin >> n >> k>> x>>y;

    int count = 0; 
    for(int i = 0; i<n; i++)
    {
        if(i < k)
        {
            count += x;
        }
        else{
            count += y;
        }
    }
    cout << count << "\n";

    return 0;
}