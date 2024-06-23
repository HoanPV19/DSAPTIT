#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9 +7;
string s="";
int n, k;
void Try(int i, int idx)
{
    if(i==n)
    {
        cout<<s<<'\n';
        return;
    }
    for(int j=idx;j<=k;j++)
    {
        char l='A'+j;
        s+=l;
        Try(i+1,j);
        s.pop_back();
    }
}
void testcase()
{
    char a;
   cin>>a>>n;
   k=a-'A';
   Try(0,0);
}
int main() {
   int t;
   t=1;
   while(t--)
   {
        testcase();
    }
}