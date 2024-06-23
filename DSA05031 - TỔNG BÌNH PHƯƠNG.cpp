#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 100005;
const ll mod = 1e9 + 7;
int a[MAX];
void testcase()
{
    ll dp[MAX];
    int N;
    cin >> N;
    for (int i = 1; i <= N;i++)
        dp[i]=1e9;
    dp[0] = 0;
    for (int i = 1; i <= N;i++)
    {
        for (int j = 1; j <= sqrt(i);j++)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    cout << dp[N] << '\n';
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