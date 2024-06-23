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
	vector <int> a(100000), b(100000);
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		set <int> v;
		map <int,int> m1,m2;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			v.insert(a[i]);
			++m1[a[i]];
		}
		for(int i=1;i<=m;i++)
		{
			cin>>b[i];
			v.insert(b[i]);
			++m2[b[i]];
		}
		for(int x:v)
			cout<<x<<" ";
		cout<<'\n';
		for(auto x:m1)
		{
			if(m2[x.first])
			{
				for(int i=1;i<=min(x.second,m2[x.first]);i++)
					cout<<x.first<<" ";
			}
		}
		cout<<'\n';
	}
}