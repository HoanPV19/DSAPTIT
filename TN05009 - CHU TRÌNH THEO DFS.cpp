#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
class graph
{
public:
    int n, k, ok = 0;
    vector<int> dsk[MAX], ct;
    bool visited[MAX];
    void input()
    {
        cin >> n >> k;
        int x, y;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            dsk[x].push_back(y);
            dsk[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
        {
            visited[i] = false;
            sort(dsk[i].begin(), dsk[i].end());
        }
    }
    void dfs(int s, int father)
    {
        if(ok)
            return;
        visited[s] = true;
        for(auto v:dsk[s])
        {
            if (v == 1 && v != father)
            {
                ok = 1;
                ct.push_back(1);
                return;
            }
            else if(!visited[v])
            {
                if(!ok)
                ct.push_back(v);
                dfs(v,s);
                if(!ok)
                ct.pop_back();
            }
        }
    }
};
void testcase()
{
    graph gr;
    gr.input();
    gr.ct.push_back(1);
    gr.dfs(1,0);
    if(!gr.ok||gr.ct.size()==1)
    {
        cout << "NO\n";
    }
    else
    {
        for (auto v : gr.ct)
        {
            cout << v << " ";
        }
        cout << '\n';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}