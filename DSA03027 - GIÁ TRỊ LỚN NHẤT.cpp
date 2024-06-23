#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	vector <ll> fg(n+1);
	fg[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>fg[i];
		fg[i]+=abs(fg[i]);
	}
	ll ans=-1e18, tmp=0;
	for(int i=1;i<=n;i++)
	{
		tmp+=fg[i];
		ans=max(ans,tmp);
		if(tmp<0)
			tmp=0;
	}
	cout<<ans;
}