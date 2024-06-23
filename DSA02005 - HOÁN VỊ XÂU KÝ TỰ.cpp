#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 105;
int n;
string a, s="";
vector <string> vs;
bool visited[MAX];
void Try( string s)
{
    if(s.size()==a.size())
    {
        cout<<s<<" ";
        return;
    }
    for(int i=0;i<a.size();i++)
    {
        if(!visited[i])
        {
            visited[i]=true;
            Try(s+a[i]);
            visited[i]=false;
        }
    }
}
void testcase()
{
   cin>>a;
    memset(visited,false,sizeof visited);
    Try("");
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