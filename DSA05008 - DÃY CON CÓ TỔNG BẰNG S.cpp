#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
int dp[400005];
void testcase()
{
    memset(dp, 0, sizeof(dp));
    int n, s;
    cin >> n >> s;
    int a[n + 1];
    int sum = 0;
    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum%2==0&&s%2)
    {
        cout << "NO\n";
        return;
    }
    dp[0] = 1;
    for (int i = 1; i <= n;i++)
    {
        for (int j = s; j >= a[i];j--)
        {
            dp[j] = dp[j] || dp[j - a[i]];
        }
    }
    if(dp[s])
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
    return 0;
}