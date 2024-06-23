#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int testcase(int m)
{
	queue <pair<int,int>> q;
	q.push({m,0});
	map <int, bool> mp;
	mp[m]=true;
	while(!q.empty())
	{
		pair<int,int> n=q.front();
		q.pop();
		if(n.first==2)
			return n.second+1;
		for(int i=2;i<=sqrt(n.first);i++)
			if(n.first%i==0&&!mp[n.first/i])
			{
					mp[n.first/i]=true;
					q.push({n.first/i,n.second+1});
			}
    	q.push({n.first-1,n.second+1});
	}
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<testcase(n)<<'\n';
	}
}