#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			string a, b;
	cin>>a>>b;
	int n=a.length(),m=b.length();
	int dp[n][m];
	dp[0][0]=0;
	if(a[0]==b[0])
		dp[0][0]=1;
	for(int i=1;i<m;i++)
		if(b[i]==a[0])
			dp[0][i]=1;
		else
			dp[0][i]=dp[0][i-1];
	for(int i=1;i<n;i++)
		if(b[0]==a[i])
			dp[i][0]=1;
		else
			dp[i][0]=dp[i-1][0];
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
			if(a[i]==b[j])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
				dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
	}
	cout<<dp[n-1][m-1]<<'\n';
	}
}