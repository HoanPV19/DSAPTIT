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
        memset(dp,0,sizeof(dp));
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll res=a[1];
        dp[1]=a[1];
        for(int i=2;i<=n;i++)
        {
            dp[i]=max(dp[i-2]+a[i],dp[i-1]);
      //      res=max(dp[i],res);
        }
        cout<<dp[n]<<'\n';
    }
}