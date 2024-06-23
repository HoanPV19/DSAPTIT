#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
set <string> res;
void testcase()
{
	int n, m;
	cin>>n>>m;
	int x;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>x;
	}
	ll dp[n+1][m+1];
	memset(dp,0,sizeof dp);
	dp[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			dp[i][j]+=dp[i-1][j]+dp[i][j-1];
	}
	cout<<dp[n][m]<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		testcase();
	}
	return 0;
}