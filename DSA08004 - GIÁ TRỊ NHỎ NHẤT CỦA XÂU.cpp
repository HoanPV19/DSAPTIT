#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
ll testcase(string s,int k)
{
	map<char,ll> mp;
	for(char x:s)
		++mp[x];
	priority_queue<ll> pq;
	for(char x:s)
	{
		if(mp[x])
			pq.push(mp[x]);
		mp[x]=0;
	}
	while(k--&&!pq.empty())
	{
		ll a=pq.top();
		pq.pop();
		if(a)
		pq.push(--a);
	}
	ll sum=0;
	while(!pq.empty())
	{
		sum+=pq.top()*pq.top();
		pq.pop();
	}
	cout<<'\n';
	return sum;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int k;
		cin>>k>>s;
		cout<<testcase(s,k)<<'\n';
	}
}