#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1000005;
const ll mod= 1e9+7;
int main()
{
	int t;
	//cin>>t;
    t=1;
	while(t--)
	{
        int c,k;
        cin>>c>>k;
        int dp[c+1];
        int w[k+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=k;i++)
        {
            cin>>w[i];
        }
        for(int i=1;i<=k;i++)
        {
            for(int j=c;j>=1;j--)
            {
                if(j-w[i]>=0&&dp[j-w[i]])
                    dp[j]=1;
            }
        }
        for(int i=c;i>=0;i--)
        {
            if(dp[i])
            {
                   cout<<i<<"\n";
                   break;
            }
        }
    }
}