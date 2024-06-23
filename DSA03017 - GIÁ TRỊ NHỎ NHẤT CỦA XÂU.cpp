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
		int k;
		cin>>k;
		string s;
		cin>>s;
		map <char, int> mp;
		for(int i=0;i<s.size();i++)
		{
			++mp[s[i]];
		}
		priority_queue <int,vector<int>> pq;
		for(auto y:mp)
		{
			pq.push(y.second);
		}
		for(int i=1;i<=k;i++)
		{
			int x=pq.top();
			pq.pop();
			pq.push(--x);
		}
		ll sum=0;
		while(!pq.empty())
		{
			int y=pq.top();
			sum+=(ll)y*y;
			pq.pop();
		}
		cout<<sum<<'\n';
	}
}