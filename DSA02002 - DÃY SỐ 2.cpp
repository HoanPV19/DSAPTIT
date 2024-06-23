#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
int n;
ll a[MAX];
vector <string> vs;
void Try(int N)
{
    string s="[";
    for(int i=1;i<=N;i++)
    {
        a[i]=a[i]+a[i+1];
        s+=to_string(a[i]);
        if(i!=N)
            s+=" ";
    }
    s+="]";
    vs.push_back(s);
    if(N>1)
        Try(N-1);
}
void testcase()
{
   cin>>n;
   for(int i=1;i<=n;i++)
        cin>>a[i];
    string s="[";
    for(int i=1;i<=n;i++)
    {
        s+=to_string(a[i]);
        if(i!=n)
            s+=" ";
    }
    s+="]";
    vs.push_back(s);
    if(n>1)
        Try(n-1);
    for(int i=vs.size()-1;i>=0;i--)
    {
        cout<<vs[i];
        if(i!=0)
            cout<<" ";
    }
    cout<<'\n';
    vs.clear();
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}