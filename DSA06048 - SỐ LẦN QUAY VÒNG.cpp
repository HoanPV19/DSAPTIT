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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			cout<<i+1<<'\n';
			return;
		}
	}
	cout<<"0\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		test();
}