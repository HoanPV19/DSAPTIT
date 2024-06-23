#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll POW(int n, int k)
{
	if(k==0)
		return 1;
	ll tmp=POW(n,k/2);
	if(k%2)
		return ((tmp*tmp)%mod*n)%mod;
	else
		return (tmp*tmp)%mod;
}
void testcase()
{
	int n, k;
	cin>>n>>k;
	cout<<POW(n,k)<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}