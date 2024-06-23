#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int a[105];
int n;
int sum=0;
bool check(string s)
{
    for(int i=0;i<n-1;i++)
    {
        if(abs(s[i]-s[i+1])==1)
            return false;
    }
    return true;
}
int visited[100];
void Try(string s)
{
    if(s.size()==n)
    {
       if(check(s))
            cout<<s<<'\n';
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            char c='0'+i;
            visited[i]=true;
            Try(s+c);
            visited[i]=false;
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            visited[i]=false;
        Try("")   ;     
    }
}