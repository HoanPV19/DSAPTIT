#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 105;
const ll mod = 1e9 + 7;
void testcase()
{
    string a, b, c;
    int n, m, p;
    cin >> n >> m >> p;
    cin >> a >> b >> c;
    int dp[MAX][MAX][MAX];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= n;i++)
        for (int j = 0; j <= m;j++)
        {
                for (int k = 0; k <= p;k++)
                {
                    if(i==0||j==0||k==0)
                        dp[i][j][k] = 0;
                    else if(a[i-1]==c[k-1]&&a[i-1]==b[j-1])
                        dp[i][j][k] = dp[i - 1][j - 1][k - 1]+1;
                    else
                        dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                }
        }
    cout << dp[n ][m ][p ]<< '\n';
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