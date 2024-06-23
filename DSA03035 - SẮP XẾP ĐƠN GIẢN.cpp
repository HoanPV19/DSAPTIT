#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int a[1005];
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin>>n;
	int x;
	int f[n+1]={};
	for(int i=0;i<n;i++)
	{
		cin>>x;
		f[x]=f[x-1]+1;
	}
	cout<<n-*max_element(f+1,f+n+1);
}