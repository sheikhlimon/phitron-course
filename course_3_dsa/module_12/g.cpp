#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int num, remainder, reverseNum = 0;
    cin >> num;
    int temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        reverseNum = (reverseNum * 10) + remainder;
        temp = temp / 10;
    }
    if (num == reverseNum)
    {
        cout << "Yes"
             << "\n";
    }
    else
        cout << "No"
             << "\n";

    return 0;
}