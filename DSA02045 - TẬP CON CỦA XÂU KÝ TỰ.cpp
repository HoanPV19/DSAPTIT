#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9 +7;
string s;
int n;
string tmp="";
void Try(int i)
{
    for(int j=i;j<n;j++)
    {
        tmp+=s[j];
        cout<<tmp<<" ";
        Try(j+1);
        tmp.pop_back();
    }
}
int main() {
   int t;
   cin>>t;
   while(t--)
   {
        cin>>n>>s;
        Try(0);
        cout<<'\n';
   }
}