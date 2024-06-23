#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll sum=0;
		int n;
		cin>>n;
		vector <ll> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++)
		{
			sum=(sum+(v[i]*i))%mod;
		}
		cout<<sum<<'\n';
	}
}