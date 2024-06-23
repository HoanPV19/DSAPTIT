#include <bits/stdc++.h>
#define ll long long
#define MAX 100
using namespace std;
int n, k;
vector <string> v;
void Try(int i,string s,int cnt)
{
    if(cnt==k)
    {
        cout<<s<<'\n';
        return;
    }
    for(int j=i;j<n;j++)
    {
        Try(j+1,s+v[j]+' ',cnt+1);
    }
}
int main() {
    cin>>n>>k;
    string s;
    set <string> se;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        se.insert(s);
    }
    vector <string> a(se.begin(),se.end());
    v=a;
    n=a.size();
    Try(0,"",0);
}