#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll f[93];
void sang()
{
	f[1]=1;
	f[2]=1;
	for(int i=3;i<=92;i++)
		f[i]=f[i-1]+f[i-2];
}
char calc(ll n, ll k)
{
	if(n==1)
		return 'A';
	if(n==2)
		return 'B';
	if(k<=f[n-2])
		return calc(n-2,k);
	else
		return calc(n-1,k-f[n-2]);
}
void testcase()
{
	ll n, k;
	cin>>n>>k;
	cout<<calc(n,k)<<'\n';
}
int main()
{
	sang();
	int t=1;
	cin>>t;
	while(t--)
		testcase();
}