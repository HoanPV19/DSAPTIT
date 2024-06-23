#include <bits/stdc++.h>
using namespace std;
int x;
class graph
{
    public:
        int e,v;
        bool visited[1005];
        vector<int> dsk[1005];
        void input()
        {
            cin>>e>>v>>x;
            int p,q;
            for(int i=1;i<=v;i++)
            {
                cin>>p>>q;
                dsk[p].push_back(q);
            }
        }
        void reinit()
        {
            for(int i=1;i<=e;i++)
                visited[i]=false;
        }
        void dfs(int u)
        {
            visited[u]=true;
            cout<<u<<" ";
            for(auto k:dsk[u])
                if(!visited[k])
                    dfs(k);
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
        gr.dfs(x);
        cout<<'\n';
    }
}