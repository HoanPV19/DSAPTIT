#include <bits/stdc++.h>
using namespace std;
class graph
{
    public:
        int e,v;
        vector <int> g[1001];
        bool visited[10005];
        void reinit()
        {
            for(int i=1;i<=e;i++)
                visited[i]=false;
        }
        void input()
        {
            int x,y;
            cin>>e>>v;
            for(int i=1;i<=v;i++)
            {
                cin>>x>>y;
                g[x].push_back(y);
                g[y].push_back(x);
            } 
        }
        void dfs(int x,int bo)
        {
            visited[x]=true;
            for(auto k:g[x])
            {
                if(k==bo)
                    continue;
                if(!visited[k])
                    dfs(k,0);
            }
        }
        void cau()
        {
            for(int i=1;i<=e;i++)
            {
                for(int j=0;j<g[i].size();j++)
                {
                    dfs(i,g[i][j]);
                    for(int k=1;k<=e;k++)
                        if(!visited[k])
                        {
                            if(i<g[i][j])
                                cout<<i<<" "<<g[i][j]<<" ";
                            break;
                        }
                    reinit();
                }
            }
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        graph gr;
        gr.input();
        gr.reinit();
        gr.cau();
        cout<<'\n';
    }
}