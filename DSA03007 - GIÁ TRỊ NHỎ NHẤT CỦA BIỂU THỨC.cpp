#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int a[1005];
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll sum=0;
		vector<ll> a(n),b(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		for(int i=0;i<n;i++)
		{
			sum+=a[i]*b[i];
		}
		cout<<sum<<'\n';
	}
}