#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int a[1005];
bool solve(int n)
{
	if(n%2==0)
	{
		int l=n/2-1, r=l+1;
		while(l>=0)
		{
			if(abs(a[l]-a[r])!=(r-l))
				return false;
			--l;
			++r;
		}
		return true;
	}
	else
	{
		int l=n/2-1, r=l+2;
		if(abs(a[l]-a[l+1])!=1||abs(a[l+1]-a[r])!=1)
			return false;
		while(l>=0)
		{
			if(abs(a[l]-a[r])!=(r-l))
				return false;
			--l;
			++r;
		}
		return true;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(solve(n))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}