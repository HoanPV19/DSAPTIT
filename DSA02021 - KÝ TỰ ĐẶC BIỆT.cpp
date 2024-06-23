#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll len;
vector <ll> lt2;
void tinh()
{
	ll k=1;
	while(k<=1e18)
	{
		k*=2;
		lt2.push_back(k);
	}
}
ll trunua(ll d)
{
	ll j=0;
	while(lt2[j]*len<d)
		++j;
	return d-len*(ll)pow(2,j)-1;
}
ll Try(ll d)
{
	while(1)
	{
		if(d<=len)
		return d;
	ll k=trunua(d);
	if(k==0)
		--d;
	else
		d=k;
	}
}
int main()
{
	int t;
	cin>>t;
	tinh();
	while(t--)
	{
		ll k;
		string s;
		cin>>s>>k;
		len=(ll)s.size();
	 cout<<s[Try(k)-1]<<'\n';
	}
}