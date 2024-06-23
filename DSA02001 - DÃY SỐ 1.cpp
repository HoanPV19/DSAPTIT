#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
int n;
ll a[MAX];
void Try(int N)
{
    cout<<"[";
    for(int i=1;i<=N;i++)
    {
        a[i]=a[i]+a[i+1];
        cout<<a[i];
        if(i!=N)
            cout<<" ";
    }
    cout<<"]\n";
    if(N>1)
        Try(N-1);
}
void testcase()
{
   cin>>n;
   for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<"[";
    for(int i=1;i<=n;i++)
    {
        cout<<a[i];
        if(i<n)
            cout<<" ";
    }
    cout<<"]\n";
    if(n>1)
    Try(n-1);
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