#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll calc(ll n, ll k)
{
	if(k==pow(2,n-1))
		return n;
	else if(k<pow(2,n-1))
		return calc(n-1,k);
	else
		return calc(n-1,k-pow(2,n-1));
}
void testcase()
{
	ll n , k;
	cin>>n>>k;
	cout<<calc(n,k)<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}