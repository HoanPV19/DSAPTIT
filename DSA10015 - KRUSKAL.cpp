#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct edge
{
    int fi, se, w;
};
bool cmp(edge a, edge b)
{
    if(a.w!=b.w)
        return a.w < b.w;
    if(a.fi==b.fi)
        return a.se < b.se;
    return a.fi < b.fi;
}
class graph
{
    public:
        int v, e;
        vector<int> dsk[105];
        vector<struct edge> edge;
        bool visited[105];
        void reinit()
        {
            for (int i = 1; i <= v;i++)
                visited[i] = false;
        }
        void input()
        {
            cin >> v >> e;
            struct edge a;
            reinit();
            for (int i = 0; i < e;i++)
            {
                cin >> a.fi >> a.se >> a.w;
                edge.push_back(a);
            }
            sort(edge.begin(), edge.end(), cmp);
        }
        void dfs(int i)
        {
            visited[i] = true;
            for(auto x:dsk[i])
                if(!visited[x])
                    dfs(x);
        }
        void kruskal()
        {
            int res = 0;
            for (int i = 0; i < e;i++)
            {
               // cout << edge[i].fi << ' ' << edge[i].se << ' ' << edge[i].w << '\n';
                reinit();
                dfs(edge[i].fi);
                if(!visited[edge[i].se])
                {
                    res += edge[i].w;
                    dsk[edge[i].fi].push_back(edge[i].se);
                    dsk[edge[i].se].push_back(edge[i].fi);
                }
            }
            cout << res << '\n';
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        graph gr;
        gr.input();
        gr.kruskal();
    }
}