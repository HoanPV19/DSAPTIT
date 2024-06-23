#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=10005;
class graph
{
    public:
        int n, k, kq=0;
        vector <int> dsk[MAX];
        bool visited[MAX];
        void input()
        {
            cin>>n>>k;
            int x,y;
            for(int i=0;i<k;i++)
            {
                cin>>x>>y;
                dsk[x].push_back(y);
                dsk[y].push_back(x);
            }
        }
        void reinit()
        {
            for(int i=1;i<=n;i++)
                visited[i]=false;
        }
        void bfs(int s)
        {
            visited[s]=true;
            queue <int> q;
            q.push(s);
            int cnt=1;
           while(!q.empty())
           {
                int v=q.front();
                q.pop();
                for(auto u:dsk[v])
                {
                    if(!visited[u])
                    {
                        ++cnt;
                        q.push(u);
                        visited[u]=true;
                    }
                }
           }
           kq=max(kq,cnt);
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
        gr.reinit();
        int ok=0;
        gr.bfs(1);
        for(int i=1;i<=gr.n;i++)
        {
            if(!gr.visited[i])
            {
                ok=1;
                cout<<"NO\n";
                break;
            }
        }
        if(!ok)
        cout<<"YES"<<'\n';
    }
}