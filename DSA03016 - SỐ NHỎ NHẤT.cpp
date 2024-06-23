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
		int s, d;
		cin>>s>>d;
		vector <int> v;
		bool check=true;
		if(s>9*d)
		{
			cout<<"-1\n";
			continue;
		}
		int cnt=1;
		for(int i=1;i<=9;i++)
		{
			if(s-i<=9*(d-cnt))
			{
				++cnt;
				cout<<i;
				s-=i;
				break;
			}
		}
		while(s)
		{
			for(int i=0;i<=9;i++)
		{
			if(s-i<=9*(d-cnt))
			{
				++cnt;
				cout<<i;
				s-=i;
				break;
			}
		}
		}
		cout<<'\n';
	}
}