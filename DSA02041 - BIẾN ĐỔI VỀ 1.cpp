#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9 +7;
string s;
ll kq=1e18;
void Try(ll n, ll count)
{
   if(n==1)
   {
        kq=min(kq,count);
        return;
   }
   if(count>kq)
        return;
    if(n>=3)
        Try(n/3,count+1+n%3);
    if(n>=2)
        Try(n/2,count+1+n%2);
}
int main() {
   int t;
   cin>>t;
   while(t--)
   {
    ll n;
        cin>>n;
        Try(n,0);
        cout<<kq<<'\n';
        kq=1e18;
   }
}