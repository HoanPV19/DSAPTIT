#include <bits/stdc++.h>
#include <queue>
using namespace std;
int partition(int a[], int l, int r)
{
	int x=a[r];
	int i=l-1;
	for(int j=l;j<r;j++)
	{
		if(a[j]<=x)
		{
			++i;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}
void qsort(int a[],  int l,  int r)
{
	if(l<r)
	{
		int p=partition(a, l, r);
		qsort(a,l,p-1);
		qsort(a, p+1,r);
	}
}
int main()
{
	int t;
	cin>>t;
	int a[100000];
	while(t--)
	{
		int n,m;
		cin>>n;
		set <int> v;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		qsort(a,1,n);
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<'\n';
	}
}