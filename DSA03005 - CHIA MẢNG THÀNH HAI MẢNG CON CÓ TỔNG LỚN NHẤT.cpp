#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	int t;
	cin>>t;
	int x=0;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int mi=min(n-k,k);
		sort(a,a+n);
		int smax=0, smin=0;
		for(int i=0;i<mi;i++)
			smin+=a[i];
		for(int i=mi;i<n;i++)
			smax+=a[i];
		cout<<smax-smin<<"\n";
	}
}