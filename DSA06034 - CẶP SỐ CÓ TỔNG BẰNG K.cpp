#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9 +7;
string s;
void testcase(ll n, ll k)
{
   map <ll, ll> mp;
   ll x;
   for(int i=0;i<n;i++)
    {
        cin>>x;
        ++mp[x];
    }
    ll count=0;
    for(auto y: mp)
    {
        if(y.first!=k-y.first)
            count+=y.second*mp[k-y.first];
        else
            count+=y.second*(y.second-1)/2;
        mp[y.first]=0;
    }
    cout<<count<<'\n';
}
int main() {
   int t;
   cin>>t;
   while(t--)
   {
        ll n, k;
        cin>>n>>k;
        testcase(n,k);
    }
}