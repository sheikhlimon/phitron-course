#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char ch;
    cin>>ch;

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout << "vowel" << "\n";
        break;
        default:
        cout<<"consonant"<< "\n";
        break;
    }

    return 0;
}
