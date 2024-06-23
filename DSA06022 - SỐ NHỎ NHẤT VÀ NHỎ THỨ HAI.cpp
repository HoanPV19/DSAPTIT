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
	cin>>n;
	set <int> se;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		se.insert(x);
	}
	if(se.size()==1)
		cout<<"-1\n";
	else
	{
		auto it=se.begin();
		cout<<*it<<" "<<*(++it)<<'\n';
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		test();
}