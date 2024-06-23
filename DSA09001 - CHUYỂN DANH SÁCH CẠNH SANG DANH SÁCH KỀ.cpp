#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int u,v,x,y;
        cin>>u>>v;
        vector <vector<int>> dsc(u+1);
        for(int i=1;i<=v;i++)
        {
            cin>>x>>y;
            dsc[x].push_back(y);
            dsc[y].push_back(x);
        }
        auto it=dsc.begin();
        for(int i=1;i<=u;i++)
        {
            sort(dsc[i].begin(),dsc[i].end());
            cout<<i<<":";
            for(int tmp:dsc[i])
                cout<<" "<<tmp;
            cout<<'\n';
        }
    }
}