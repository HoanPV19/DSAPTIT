#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9 +7;
string s;
bool nt(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return n>1;
}
vector <int> ve;
vector <vector<int>> v;
int n;
void Try(int i, int s, int p, int sum)
{
    if(sum>p)
        return;
    if(i==n)
    {
        if(sum==p)
            v.push_back(ve);
        return;
    }
    for(int j=s+1;j<=p;j++)
    {
        if(nt(j))
        {
            ve.push_back(j);
            Try(i+1,j+1,p,sum+j);
            ve.pop_back();
        }
    }
}
void testcase()
{
    int s, p;
    cin>>n>>s>>p;
    Try(0,s,p,0);
    cout<<v.size()<<'\n';
    for(auto x:v)
    {
        for(auto e:x)
            cout<<e<<" ";
        cout<<'\n';
    }
    v.clear();
    ve.clear();
}
int main() {
   int t;
   cin>>t;
   while(t--)
   {
        testcase();
    }
}