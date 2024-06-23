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
        getline(cin,s);
        stringstream ss(s);
        while(ss>>tmp)
            dsk[i].push_back(stoi(tmp));
   }
   memset(g,0,sizeof(g));
   for(int i=1;i<=n;i++)
   {
        for(auto k:dsk[i])
            g[i][k]=1;
   }
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<g[i][j]<<" ";
        cout<<'\n';
    }
}