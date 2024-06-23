#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX=1000;
int a[MAX][MAX];
bool visited[MAX][MAX];
set <string> se;
int n;
void ql(int i, int j, string s)
{
	if(!a[i][j]||i<1||j<1||i>n||j>n||visited[i][j])
	{
		return;
	}
	if(i==n&&j==n)
	{
		se.insert(s);
		return;
	}
	visited[i][j]=true;
	ql(i,j+1,s+"R");
	ql(i-1,j,s+"U");
	ql(i,j-1,s+"L");
	ql(i+1,j,s+"D");
	visited[i][j]=false;
}
void testcase()
{
	cin>>n;
	memset(a,0,sizeof a);
	memset(visited,false,sizeof visited);
	se.clear();
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	ql(1,1,"");
	if(se.empty()||!a[1][1])
	{
		cout<<"-1\n";
	}
	for(auto x: se)
	{
		cout<<x<<" ";
	}
	cout<<'\n';
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