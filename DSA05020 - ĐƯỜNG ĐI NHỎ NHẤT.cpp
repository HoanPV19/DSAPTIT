#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1005;
int main()
{
    int t;
    cin >> t;
    int dp[MAX][MAX];
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i <= n;i++)
        {
            for (int j = 0; j <= m;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j] = 1e9;
                    continue;
                }
                cin >> dp[i][j];
                if(i==1&&j==1)
                    continue;
                dp[i][j] += min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
            }
        }
            cout << dp[n][m] << '\n';
    }
}