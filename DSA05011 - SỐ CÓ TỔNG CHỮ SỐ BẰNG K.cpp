#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 105;
const ll mod = 1e9 + 7;
void testcase()
{
    int n, k;
    cin >> n >> k;
    int dp[MAX][50005];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= 9;i++)
        if(i<=k)
            dp[1][i] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= k;j++)
        {
            for (int e = 0; e <= 9;e++)
                if(j-e>=0)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - e]) % mod;
        }
    }
    cout << dp[n][k] << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}