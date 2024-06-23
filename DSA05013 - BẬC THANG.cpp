#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1000005;
const ll mod= 1e9+7;
int main()
{
	int t;
	cin>>t;
    ll dp[MAX];
	while(t--)
	{
        int n, k;
        cin>>n>>k;
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
         //   dp[i]=0;
            for(int j=1;j<=k;j++)
            {
                if(i-j>=0)
                    dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
        cout<<dp[n]<<'\n';
    }
}