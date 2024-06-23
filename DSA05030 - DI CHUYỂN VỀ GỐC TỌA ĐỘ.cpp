#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[30][30];
int main()
{
    int t, a, b;
    for (int i = 1; i <= 25; i++)
        dp[i][0] = dp[0][i] = 1;
    for (int i = 1; i <= 25; i++)
        for (int j = 1; j <= 25; j++)
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << dp[a][b] << '\n';
    }
}