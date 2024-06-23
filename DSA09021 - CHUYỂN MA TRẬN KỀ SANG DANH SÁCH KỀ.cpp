#include <bits/stdc++.h>
using namespace std;
int g[1005][1005];
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
   int n,x,y;
   cin>>n;
   cin.ignore();
   vector <int> dsk[1005];
   string s,tmp;
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++)
        {
            cin>>g[i][j];
            if(g[i][j])
             dsk[i].push_back(j);
        }
   }
   for(int i=1;i<=n;i++)
   {
        for(auto k:dsk[i])
            cout<<k<<" ";
        cout<<'\n';
   }
}