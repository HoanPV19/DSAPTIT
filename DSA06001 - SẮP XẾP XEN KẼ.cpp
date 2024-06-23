#include <iostream>
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
	int a[1006];
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	qsort(a,0,n-1);
	int l=0,r=n-1;
//	for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
	while(l<=r)
	{
		cout<<a[r--]<<" ";
		if(r>=l)
		{
			cout<<a[l++]<<" ";
		}
	}
	  cout<<'\n'; 
}
}