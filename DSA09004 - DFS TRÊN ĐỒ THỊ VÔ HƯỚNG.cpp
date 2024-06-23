#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool mark[1005];
vector<int> dsk[1005];
void dfs(int v)
{
	mark[v]=true;
	cout<<v<<" ";
	for(auto u:dsk[v])
		if(!mark[u])
			dfs(u);
}
void testcase()
{
	memset(mark, false, sizeof mark);
	int n,m,start,x,y;
	cin>>n>>m>>start;
	for(int i=1;i<=n;i++)
		dsk[i].clear();
	while(m--)
	{
		cin>>x>>y;
		dsk[x].push_back(y);
		dsk[y].push_back(x);
	}
	dfs(start);
	cout<<'\n';
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
		testcase();
}