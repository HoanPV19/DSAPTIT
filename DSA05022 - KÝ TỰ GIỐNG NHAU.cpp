#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
int C[MAX][MAX];
void testcase()
{
    int dp[MAX];
    int them, bot, x2, n;
    cin >> n >> them >> bot >> x2;
    dp[0] = 0;
    for (int i = 1; i <= n;i++)
    {
        dp[i] = dp[i - 1] + them;
        if(i%2==0)
            dp[i] = min(dp[i], dp[i / 2] + x2);
        if(i>1&&i%2)
            dp[i] = min(dp[i], dp[i / 2 + 1] + x2 + bot);
    }
    cout << dp[n] << '\n';
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