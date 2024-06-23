#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 105;
int n;
int a[MAX][MAX];
vector <string> vs;
string s="";
int ok=0;
void Try(int i,int j)
{
    if(j>n||i>n||!a[i][j])
        return;
    if(i==n&&j==n)
    {
        ok=1;
        cout<<s<<" ";
        return;
    }
    s+="D";
    Try(i+1,j);
    s.pop_back();
    s+="R";
    Try(i,j+1);
    s.pop_back();
}
void testcase()
{
   cin>>n;
   ok=0;
   for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++) 
        cin>>a[i][j];
    if(a[1][1]==0)
    {
        cout<<"-1\n";
        return;
    }
    Try(1,1);
    if(!ok)
    {
        cout<<"-1\n";
        return;
    }
    cout<<"\n";
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