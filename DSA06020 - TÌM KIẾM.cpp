#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000005];
int find(int l, int r, int x)
{
	while(l<=r)
	{
		int mid=l+(r-l);
		if(a[mid]==x)
			return 1;
		else if(a[mid]<x)
			l=mid+1;
		else
			r=mid-1;
	}
	return -1;
}
void test()
{
	int n, x;
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<find(0,n-1,x)<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		test();
}