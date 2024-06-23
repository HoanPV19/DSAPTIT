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
	int a[100000],b[100000];
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		qsort(a,0,n-1);
		int l,r;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				l=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]!=b[i])
			{
				r=i;
				break;
			}
		}
		cout<<l+1<<" "<<r+1<<"\n";
	}
}