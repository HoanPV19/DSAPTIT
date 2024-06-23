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
        void bfs(int u)
        {
            visited[u]=true;
            cout<<u<<" ";
            queue<int> q;
            q.push(u);
            while(!q.empty())
            {
                int k=q.front();
                q.pop();
                for(auto k:dsk[k])
                {
                    if(!visited[k])
                    {
                        cout<<k<<" ";
                        q.push(k);
                        visited[k]=true;
                    }
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
        gr.bfs(x);
        cout<<'\n';
    }
}