#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1005;
int dp[MAX][MAX], a[MAX], c[MAX];
void testcase()
{
    int N, V;
    memset(dp, 0, sizeof(dp));
    cin >> N >> V;
    for (int i = 1; i <= N; i++)
        cin >> a[i];
    for (int i = 1; i <= N; i++)
        cin >> c[i];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - a[i] >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
        }
    }
    cout << dp[N][V] << '\n';
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