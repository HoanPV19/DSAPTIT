#include <iostream>
#include <queue>
using namespace std;
int partition(int a[], int , int );
void qsort(int a[], int l, int r)
{
	if(l<r)
	{
		int q=partition( a, l, r);
		qsort(a,l,q-1);
		qsort(a,q+1,r);
	}
}
int partition(int a[], int l, int r)
{
	int i=l-1;
	for(int j=l;j<r;j++)
	{
		if(a[j]<a[r])
		{
			++i;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}
int main()
{
	int t;
	cin>>t;
	int a[1005];
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
		qsort(a,0,n-1);
		for(int i=n-1;i>=n-k;i--)
			cout<<a[i]<<" ";
		cout<<'\n';
	}
}