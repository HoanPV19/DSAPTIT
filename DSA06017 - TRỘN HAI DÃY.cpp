#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000005],x[1000005],y[1000005],b[1000005];
void merge(int a[], int l, int r);
void mergesort(int a[], int l, int r)
{
	if(l<r)
	{
		int mid=l+(r-l)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,r);
	}
}
void merge(int a[], int l, int r)
{
	int mid=l+(r-l)/2;
	int i1=0,i2=0;
	for(int i=l;i<=mid;i++)
		x[i1++]=a[i];
	for(int i=mid+1;i<=r;i++)
		y[i2++]=a[i];
	int i=0, j=0;
	int k=l;
	while(i<i1&&j<i2)
	{
		if(x[i]<y[j])
			a[k++]=x[i++];
		else
			a[k++]=y[j++];
	}
	while(i<i1)
		a[k++]=x[i++];
	while(j<i2)
		a[k++]=y[j++];
}
void test()
{
	int n,m;
	cin>>n>>m;
	int ma=-1e9, mib=1e9;
	for(int i=0;i<n+m;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n+m-1);
	for(int i=0;i<n+m;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		test();
	}
}