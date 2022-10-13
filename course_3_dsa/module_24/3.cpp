#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int D;
        cin >> D;

        int earnedMoney[D];
        int spentMoney[D];

        for (int i = 0; i < D; i++)
        {
            cin >> earnedMoney[i];
        }

        for (int i = 0; i < D; i++)
        {
            cin >> spentMoney[i];
        }

        int totalEarning[D];

        totalEarning[0] = earnedMoney[0];
        for (int i = 1; i < D; i++)
        {
            totalEarning[i] = totalEarning[i - 1] + earnedMoney[i];
        }

        int totalSpent[D];

        totalSpent[0] = spentMoney[0];
        for (int i = 1; i < D; i++)
        {
            totalSpent[i] = totalSpent[i - 1] + spentMoney[i];
        }

        int Q;
        cin >> Q;
        int ans[Q];
        int ind = 0;
        while (Q--)
        {
            int x;
            cin >> x;
            int available = totalEarning[x];

            int spent = totalSpent[x];

            int result = available - spent;
            if (result < 0)
            {
                ans[ind++] = 0;
            }
            else
            {
                ans[ind++] = 1;
            }
        }
        for (int i = 0; i < ind; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}