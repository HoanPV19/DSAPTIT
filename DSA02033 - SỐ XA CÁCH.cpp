#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool visited[100];
vector <string> g[11];
void ktao(int n)
{
	for(int i=0;i<=n;i++)
		visited[i]=false;
}
void Try(int i,string s,int n)
{
	if(i==n+1)
	{
		g[n].push_back(s);
		return;
	}
	if(i==1)
	{
		for(int j=1;j<=n;j++)
		{
				char c=j+'0';
				visited[j]=true;
				Try(i+1,s+c,n);
				visited[j]=false;
		}
	}
	else
	{
		for(int j=1;j<=n;j++)
		{
			if(!visited[j]&&abs(j+'0'-s[i-2])!=1)
			{
				char c=j+'0';
				visited[j]=true;
				Try(i+1,s+c,n);
				visited[j]=false;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ktao(n);
		Try(1,"",n);
		if(!g[n].empty())
		{
			for(auto k:g[n])
				cout<<k<<'\n';
		}
	}
}