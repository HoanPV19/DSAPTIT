#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
int main()
{
	int t;
	//cin>>t;
    t=1;
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
        int res=0;
        a[n+1]=1e9;
        dp[n+1]=0;
        for(int i=n;i>=1;i--)
        {
            for(int j=i+1;j<=n+1;j++)
           {
             if(a[j]>a[i]&&dp[j]+1>dp[i])
                dp[i]=dp[j]+1;
           }
            res=max(res,dp[i]);
        }
        cout<<res<<'\n';
    }
}