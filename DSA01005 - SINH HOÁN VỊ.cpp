#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a[10005];
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			a[i]=i+1;
		for(int i=0;i<n;i++)
				cout<<a[i];
			cout<<" ";
		while(next_permutation(a,a+n))
		{
			for(int i=0;i<n;i++)
				cout<<a[i];
			cout<<" ";
			}
		cout<<'\n';
	}
}