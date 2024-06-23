#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
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
            dp[i]=a[i];
        }
        ll res=a[1];
        for(int i=n;i>=1;i--)
        {
           for(int j=i+1;j<=n;j++)
           {
                if(a[j]>a[i]&&dp[i]<dp[j]+a[i])
                    dp[i]=dp[j]+a[i];
                res=max(res,dp[i]);
           }
        }
        cout<<res<<'\n';
    }
}