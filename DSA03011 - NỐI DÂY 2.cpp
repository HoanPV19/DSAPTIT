#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
bool cmp(pair<int,int> a, pair<int,int> b)
{
	if(a.second==b.second)
		return a.first<b.first;
	return a.second>b.second;
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
		ll x, timer=0;
		priority_queue <ll,vector <ll>,greater<ll>> pq;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			pq.push(x);
		}
		ll ans=0;
		while(pq.size()>1)
		{
			x=pq.top();
			pq.pop();
			ll y=pq.top();
			pq.pop();
			ans=(ans+x+y)%mod;
			pq.push((x+y)%mod);
		}
		cout<<ans<<'\n';
	}
}