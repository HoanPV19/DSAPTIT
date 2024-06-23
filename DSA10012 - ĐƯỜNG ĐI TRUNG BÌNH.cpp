#include <bits/stdc++.h>
using namespace std;
int d[105][105];
vector<int> dsk[105];
bool mark[105];
int depth[105];
void bfs(int start)
{
	memset(mark,false,sizeof mark);
	memset(depth,0,sizeof depth);
	queue<int> q;
	q.push(start);
	mark[start]=true;
	while(!q.empty())
	{
		int v=q.front();
		q.pop();
		for(int x:dsk[v])
		{
			if(!mark[x])
			{
				mark[x]=true;
				depth[x]=depth[v]+1;
				d[start][x]=depth[x];
				q.push(x);
			}
		}
	}
}
void testcase()
{
	int n, m,x,y;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		dsk[i].clear();
		for(int j=1;j<=n;j++)
			d[i][j]=1e9;
	}
	set <int> se;
	while(m--)
	{
		cin>>x>>y;
		se.insert(x);
		se.insert(y);
		dsk[x].push_back(y);
	}
	vector<int> v(se.begin(),se.end());
	for(int i=0;i<v.size();i++)
	{
		bfs(v[i]);
	}
	int cnt=0, sum=0;
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v.size();j++)
		{	
			if(i==j)
				continue;
			++cnt;
			sum+=d[v[i]][v[j]];
		//	cout<<v[i]<<" "<<v[j]<<" "<<d[v[i]][v[j]]<<'\n';
		}
	}
	float res=(float)sum/cnt;
	printf("%0.2f\n",res);
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