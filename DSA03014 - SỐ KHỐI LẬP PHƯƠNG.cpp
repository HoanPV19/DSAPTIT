#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
void sinh(ll n, vector <string> &LP)
{
	for(ll i=1;i<=n;i++)
	{
		ll k=i*i*i;
		if(k<=n)
			LP.push_back(to_string(k));
		else
			break;
	}
}
string solve(ll n, vector <string> &LP)
{
	reverse(LP.begin(),LP.end());
	string N=to_string(n);
	for(string S:LP)
	{
		int len=S.size(), idx=0;
		for(int i=0;i<N.size();i++)
		{
			if(N[i]==S[idx])
				++idx;
			if(idx==len)
				return S;
		}
	}
	return "-1";
}
int main()
{
	int t;
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>t;
	while(t--)
	{
		ll n;
	cin>>n;
	vector <string> LP;
	sinh(n,LP);
	cout<<solve(n,LP)<<'\n';
	}
}