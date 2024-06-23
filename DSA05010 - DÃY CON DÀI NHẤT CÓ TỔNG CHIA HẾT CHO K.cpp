#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1005;
const ll mod = 1e9 + 7;
int a[MAX];
void testcase()
{
    int N, k;
    cin >> N >> k;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
        a[i] %= k;
    }
    int dp[MAX][60];
    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= k; j++)
            dp[i][j] = INT_MIN;
    dp[1][a[1]] = 1;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < k; j++)
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k) % k] + 1);
    }
    cout << dp[N][0] << '\n';
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