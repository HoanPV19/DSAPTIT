#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
const ll mod=1e9+7;
ll dp[115][11];
void testcase()
{
    ll sum=0;
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
        sum=(sum+dp[n][i])%mod;
    cout<<sum<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    for(int i=1;i<=10;i++)
        dp[1][i]=1;
    for(int i=2;i<=101;i++)
    {
        for(int j=10;j>=1;j--)
        {
            dp[i][j]=0;
            for(int l=j;l>=1;l--)
                dp[i][j]=(dp[i][j]+dp[i-1][l])%mod;
        }
    }
    while (t--)
    {
        testcase();
    }
}