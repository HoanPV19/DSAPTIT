#include <bits/stdc++.h>
using namespace std;
vector <int> dsk[1005];
vector <vector <int>> p;
vector <int> path;
bool cmp(vector <int> a, vector <int> b)
{
	return a.back()<b.back();
}
void dfs(int i)
{
	path.push_back(i);
	if(dsk[i].empty())
	{
		p.push_back(path);
		return;
	}
	for(auto u:dsk[i])
	{
		dfs(u);
		path.pop_back();
	}
}
void testcase()
{
	path.clear();
	p.clear();
	int n,u,v;
	cin>>n;
	for(int i=0;i<1005;i++)
		dsk[i].clear();
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		dsk[u].push_back(v);
	}
	dfs(1);
	sort(p.begin(),p.end(),cmp);
	for(auto x:p)
	{
		for(auto y:x)
			cout<<y<<' ';
		cout<<'\n';
	}
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