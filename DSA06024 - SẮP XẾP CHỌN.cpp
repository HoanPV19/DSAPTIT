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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{
		int k=i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[k])
				k=j;
			swap(a[i],a[k]);
			cout<<"Buoc "+to_string(i+1)+": ";
			for(int j=0;j<n;j++)
				cout<<a[j]<<" ";
			cout<<'\n';
	}
}
int main()
{
	int t;
	t=1;
	while(t--)
		test();
}