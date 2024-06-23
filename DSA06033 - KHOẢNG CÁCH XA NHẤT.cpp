#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000005];
bool find(int l, int r, ll x)
{
	while(l<=r)
	{
		int mid=l+(r-l);
		if(a[mid]==x)
			return true;
		else if(a[mid]<x)
			l=mid+1;
		else
			r=mid-1;
	}
	return false;
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
	return a.first<b.first;
}
void test()
{
	int n;
	cin>>n;
	int x;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back({x,i});
	}
	sort(v.begin(),v.end(),cmp);
	int ans=-1, moc=v[0].second;
	for(int i=1;i<n;i++)
	{
		if(v[i].second-moc>ans)
		{
			ans=v[i].second-moc;
		}
		moc=min(moc,v[i].second);
	}
	cout<<ans<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
		test();
}