#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int n;
bool check(string s)
{
    for(int i=1;i<n;i++)
    {
        if(s[i]=='A'&&(s[i-1]!='E'&&s[i+1]!='E'))
            return false;
         if(s[i]=='E'&&(s[i-1]!='A'&&s[i+1]!='A'))
            return false;
    }
    return true;
}
bool visited[20];
void ql(string s)
{
    if(s.size()==n+1)
    {
        if(check(s))
        cout<<s<<'\n';
        return;
    }
    for(int i=0;i<=n;i++)
    {
        if(!visited[i])
        {
            visited[i]=true;
             char c=i+'A';
            ql(s+c);
             visited[i]=false;
        }
    }
}
int main() {
    char c;
    cin >> c;
    n=c-'A';
    for(int i=0;i<n;i++)
        visited[i]=false;
    ql("");
    return 0;
}