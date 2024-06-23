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
bool cmp(pair<int,int> a, pair<int,int> b)
{
	if(a.second==b.second)
		return a.first<b.first;
	return a.second>b.second;
}
void test()
{
	int n;
	cin>>n;
	map <int,int> mp;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		++mp[x];
	}
	vector<pair<int,int>> p(mp.begin(),mp.end());
	sort(p.begin(),p.end(),cmp);
		for(auto k:p)
		{
			for(int i=0;i<k.second;i++)
				cout<<k.first<<" ";
		}
	cout<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		test();
}