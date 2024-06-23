#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
int lanlap[105][105];
vector <string> v;
void check(int x, int y)
{
	int lan=0;
	for(auto m:v[x])
	{
		for(auto n:v[y])
			if(m==n)
				++lan;
	}
	lanlap[x][y]=lanlap[y][x]=lan;
}
int lapmin=1e9;
bool mark[105]={};
void ql(int cnt,int sum, int k)
{
	for(int i=0;i<v.size();i++)
	{
		if(!mark[i])
		{
			mark[i]=true;
			if(cnt==v.size())
				lapmin=min(lapmin,sum+lanlap[i][k]);
			else if(lapmin>sum)
			{
				if(cnt!=1)
					ql(cnt+1,sum+lanlap[i][k],i);
				else
					ql(cnt+1,sum,i);
			}
			mark[i]=false;
		}
	}
}
void testcase()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	for(int i=0;i<v.size()-1;i++)
		for(int j=i+1;j<v.size();j++)
			check(i,j);
	ql(1,0,0);
	cout<<lapmin<<'\n';
}
int main()
{
	//ios_base::sync_with_stdio(NULL);
	//cin.tie(0);
	//cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--)
		testcase();
	return 0;
}