#include <bits/stdc++.h>
using namespace std;
bool mark[100005];
vector<int> dsk[100005];
int res=0;
void dfs(int i,int cnt)
{
	res=max(cnt,res);
	mark[i]=true;
	for(auto u:dsk[i])
	{
		if(!mark[u])
			dfs(u,cnt+1);
	}
}
void testcase()
{
	res=0;
	memset(mark,false,sizeof mark);
	int n;
	cin>>n;
	int x,y;
	for(int i=1;i<=n;i++)
		dsk[i].clear();
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		dsk[x].push_back(y);
	}
	dfs(1,0);
	cout<<res<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		testcase();
	}
}