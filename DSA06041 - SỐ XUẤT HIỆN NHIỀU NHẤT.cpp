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
void test()
{
	int n,x;
	cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		++mp[x];
	}
	for(auto c:mp)
	{
		if(c.second>n/2)
		{
			cout<<c.first<<"\n";
			return;
		}
	}
	cout<<"NO\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		test();
}