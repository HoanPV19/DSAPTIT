#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	vector <ll> so;
	queue <string> q;
		q.push("1");
		ll cnt=0;
		string s;
		while(stoll(q.front())<=1e18)
		{
			so.push_back(stoll(q.front()));
			s=q.front();
			q.pop();
			q.push(s+"0");
			q.push(s+"1");
		}
		ll n;
	while(t--)
	{
		cin>>n;
		int cnt=0;
		for(ll x:so)
		{
			if(x>n)
				break;
			++cnt;
		}
		cout<<cnt<<'\n';
	}
}