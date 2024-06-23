#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=1005;
ll tp(string s)
{
    ll k=0, a=1;
    for(int i=s.size()-1;i>=0;i--)
    {
        k+=a*(s[i]-'0');
        a*=2;
    }
    return k;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a, b;
        cin>>a>>b;
        cout<<tp(a)*tp(b)<<'\n';
    }
}