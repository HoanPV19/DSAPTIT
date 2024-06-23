#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int a[1005];
bool cmp(pair <int, int> a,pair <int, int> b)
{
	return a.second<b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <pair<int, int>> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i].first;
		for(int i=0;i<n;i++)
			cin>>v[i].second;
		sort(v.begin(), v.end(), cmp);
		int count=1;
		int end=v[0].second;
		for(int i=1;i<n;i++)
		{
			if(end<=v[i].first)
			{
				++count;
				end=v[i].second;
			}
		}
		cout<<count<<'\n';
	}
}