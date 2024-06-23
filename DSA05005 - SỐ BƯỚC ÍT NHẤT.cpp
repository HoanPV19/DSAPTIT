#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int dp[MAX], a[MAX];
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            dp[i]=0;
            cin>>a[i];
        }
        dp[n+1]=0;
        a[n+1]=1e9;
        int res=0;
        for(int i=n;i>=1;i--)
        {
            for(int j=i+1;j<=n+1;j++)
            {
                if(a[i]<=a[j]&&dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
            res=max(res,dp[i]);
        }
        cout<<n-res<<'\n';
    }
}