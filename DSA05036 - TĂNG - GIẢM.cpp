#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    ll dp[MAX];
    while (t--)
    {
        memset(dp, 0, sizeof(dp));
        int n;
        cin >> n;
        float a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
            dp[i] = 1;
        }
        ll res = 1;
        for (int i = 2; i <=n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                if (a[j] < a[i] &&b[j]>b[i]&& dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
                res = max(res, dp[i]);
            }
        }
        cout << res << '\n';
    }
}