#include <bits/stdc++.h>
using namespace std;
int a[100];
int n;
bool check()
{
	for(int i=0;i<=n/2;i++)
	{
		if(a[i]!=a[n-i-1])
			return false;
	}
	return true;
}
void ql(int k)
{
	if(k==n)
	{
		if(check())
		{
			for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<'\n';
		}
		return;
	}
		a[k]=0;
		ql(k+1);
		a[k]=1;
		ql(k+1);
}
int main()
{
	cin>>n;
	ql(0);
}