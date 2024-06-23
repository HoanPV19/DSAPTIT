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
	int t;
	cin>>t;
	int a[1005];
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int buoc=0;
		for(int i=1;i<=n-1;i++)
		{
			int k=i;
			for(int j=i+1;j<=n;j++)
			{
				if(a[j]<a[k])
					k=j;
			}
			if(i!=k)
			{
				swap(a[i],a[k]);
				++buoc;
			}
		}
		cout<<buoc<<"\n";
	}
}