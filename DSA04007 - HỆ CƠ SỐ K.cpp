#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9 +7;
ll conver(ll a,ll k)
{
    ll sum=0;
    int cnt=0;
    while(a)
    {
        sum+=(a%10)*pow(k,cnt++);
        a/=10;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b,k;
        cin>>k>>a>>b;
        a=conver(a,k)+conver(b, k);
        vector <ll> v;
        while(a)
        {
            v.push_back(a%k);
            a/=k;
        }
        reverse(v.begin(),v.end());
        for(auto i : v)
            cout<<i;
        cout<<'\n';
    }
}