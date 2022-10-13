#include <bits/stdc++.h>
using ll = long long;
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main() {
  fastIO();

  string st = "abcdefghi";
  for (auto it = st.rbegin(); it != st.rend(); it++) {
    cout << *it << "\n";
  }

  return 0;
}