#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            bool hs = false;
            if (i % 2 == 1)
                hs = true;
            else
            {
                if (i % 4 == 2)
                    hs = (j == m);
                if (i % 4 == 0)
                    hs = (j == 1);
            }
            printf((hs ? "#" : "."));
        }
        printf("\n");
    }
    return 0;
}