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
		int n,v;
        cin>>n>>v;
        int a[1005],w[1005], dp[1005][1005];
        for(int i=1;i<=n;i++)
            cin>>a[i];
         for(int i=1;i<=n;i++)
            cin>>w[i];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=v;j++)
            {
                if(j-a[i]>=0)
                    dp[i][j]=max(dp[i-1][j],w[i]+dp[i-1][j-a[i]]);
                else 
                    dp[i][j]=dp[i-1][j];
            }
        }
        cout<<dp[n][v]<<'\n';
	}
}