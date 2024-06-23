#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
class graph
{
    public:
        int k, n, m;
        vector<int> dsk[MAX];
        int hop[MAX] = {0};
        bool visited[MAX]={false};
        vector<int> ng;
        void input()
        {
            cin >> k >> n >> m;
            int x, y;
            for (int i = 0; i < k;i++)
            {
                cin >> x;
                ng.push_back(x);
            }
            for (int i = 0; i < m;i++)
            {
                cin >> x >> y;
                dsk[x].push_back(y);
            }
        }
        void bfs(int s)
        {
            ++hop[s];
            visited[s] = true;
            queue<int> q;
            q.push(s);
            while(!q.empty())
            {
                int v = q.front();
                q.pop();
                for(auto u:dsk[v])
                {
                    if(!visited[u])
                    {
                        ++hop[u];
                        visited[u] = true;
                        q.push(u);
                    }
                }
            }
        }
        void solve()
        {
            int cnt = 0;
            for(auto x:ng)
            {
                memset(visited, false, sizeof(visited));
                bfs(x);
            }
            for (int i = 1; i <= n;i++)
            {
                if(hop[i]==k)
                    ++cnt;
            }
            cout << cnt << '\n';
        }
};
void testcase()
{
    graph gr;
    gr.input();
    gr.solve();
}
int main()
{
    int t = 1;
    while (t--)
    {
        testcase();
    }
    return 0;
}