#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=1005;
class graph
{
    public:
        int n, k,st;
        vector <int> dsk[MAX];
        vector <pair<int,int>> v;
        bool visited[MAX], check=false;
        void input()
        {
            int x,y;
            cin>>n>>k>>st;
            check=false;
            for(int i=1;i<=n;i++)
                visited[i]=false;
            for(int i=0;i<k;i++)
            {
                cin>>x>>y;
                dsk[x].push_back(y);
                dsk[y].push_back(x);
            }
        }
        void dfs(int s)
        {
            visited[s]=true;
            if(check)
                return;
            if(v.size()==n-1)
                    {
                        check=true;
                        return;
                    }
            for(auto u:dsk[s])
            {
                if(!visited[u])
                {
                    v.push_back({s,u});
                    dfs(u);
                }
            }
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        graph gr;
        gr.input();
        gr.dfs(gr.st);
        if(gr.check)
        {
            //sort(gr.v.begin(),gr.v.end());
            for(auto p:gr.v)
            {
                cout<<p.first<<" "<<p.second<<'\n';
            }
        }
        else
        {
            cout<<"-1\n";
        }
    }
}