#include <bits/stdc++.h>
using namespace std;
int d[505][505];
int a[505][505];
int dx[4]={1,0,0,-1};
int dy[4]={0,1,-1,0};
	int n, m;
bool safe(int i,int j)
{
	if(i<1||j<1||i>n||j>m)
		return false;
	return true;
}
int calc()
{
	d[1][1]=a[1][1];
	queue<pair<int,int>> q;
	q.push({1,1});
	while(!q.empty())
	{
		int i=q.front().first;
		int j=q.front().second;
		q.pop();
		for(int k=0;k<4;k++)
		{
			int x=i+dx[k];
			int y=j+dy[k];
			if(safe(x,y))
			{
				int tmp=d[i][j]+a[x][y];
				if(d[x][y]>tmp)
				{
					d[x][y]=tmp;
					q.push({x,y});
				}
			}
		}
	}
	return d[n][m];
}
void testcase()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		cin>>a[i][j];
		d[i][j]=1e9;
	}
	cout<<calc()<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}