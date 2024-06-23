#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll POW(ll n, ll k)
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
	string a;
	cin>>a;
	string b=a;
	reverse(b.begin(),b.end());
	cout<<POW(stoll(a),stoll(b))<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}