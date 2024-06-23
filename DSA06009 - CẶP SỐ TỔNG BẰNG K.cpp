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
		map<int,int> mp;
		int n,k,x;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			++mp[x];
		}
		int cnt=0;
		for(auto p:mp)
		{
			if(mp[k-p.first])
			{
				if(k-p.first==p.first)
					cnt+=p.second*(p.second-1)/2;
				else
				{
					cnt+=mp[k-p.first]*p.second;
					mp[k-p.first]=0;
				}
			}
		}
		cout<<cnt<<'\n';
	}
}