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
		if((n%7)%4!=0&&(n%4)%3!=0)
		{
			cout<<"-1\n";
			continue;
		}
		while(n)
		{
			if(n%7!=0)
			{
				cout<<4;
				n-=4;
			}
			else
			{
				for(int i=1;i<=n/7;i++)
					cout<<7;
				n=0;
			}
		}
		cout<<'\n';
	}
}