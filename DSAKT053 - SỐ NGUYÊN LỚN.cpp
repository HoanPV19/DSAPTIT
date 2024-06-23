#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod= 1e9+7;
int main()
{
	int t;
	cin>>t;
    int dp[MAX][MAX];
	while(t--)
	{
        memset(dp,0,sizeof(dp));
    int res=0;
        string a,b;
        cin>>a>>b;
        for(int i=1;i<=a.size();i++)
        {
            for(int j=1;j<=b.size();j++)
            {
                if(a[i-1]==b[j-1])
                 dp[i][j]=dp[i-1][j-1]+1;
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               // res=max(res,dp[i][j]);
            }
        }
        cout<<dp[a.size()][b.size()]<<'\n';
    }
}