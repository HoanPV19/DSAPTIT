#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10000005];
int find(int l, int r, int x)
{
	while(l<=r)
	{
		int mid=l+(r-l);
		if(a[mid]==x)
			return mid;
		else if(a[mid]<x)
			l=mid+1;
		else
			r=mid-1;
	}
	return -1;
}
void test()
{
	int n,x;
	cin>>n>>x;
	int idx=n;
	cin>>a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i-1]>a[i])
			idx=i;
	}
	int ok=find(0,idx-1,x);
	if(ok!=-1)
		cout<<ok+1<<'\n';
	else
	{
		cout<<find(idx,n-1,x)+1<<'\n';
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		test();
}