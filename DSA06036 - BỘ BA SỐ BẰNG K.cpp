#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005];
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
	int n;
	ll k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+2;j<n;j++)
		{
			if(k-a[i]-a[j]<0)
				continue;
			if(find(i+1,j-1,k-a[i]-a[j]))
			{
				cout<<"YES\n";
				return;
			}
		}
	}
	cout<<"NO\n";
}
int main()
{ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
		test();
}