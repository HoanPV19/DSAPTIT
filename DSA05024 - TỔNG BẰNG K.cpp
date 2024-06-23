#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1005;
const ll mod = 1e9 + 7;
ll dp[MAX], a[MAX], c[MAX];
void testcase()
{
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    int N, S;
    cin >> N >> S;
    for (int i = 1; i <= N;i++)
        cin >> a[i];
    for (int s = 1; s <= S;s++)
    {
        for (int i = 1; i <= N;i++)
        {
            if(s-a[i]>=0)
                dp[s] = (dp[s] + dp[s - a[i]])%mod;
        }
    }
    cout << dp[S] << '\n';
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