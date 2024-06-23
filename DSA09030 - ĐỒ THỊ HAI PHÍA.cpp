#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
class graph
{
public:
    int n, k, ok = 0;
    vector<int> dsk[MAX];
    int mau[MAX] = {0};
    void input()
    {
        memset(mau, -1, sizeof(mau));
        cin >> n >> k;
        int x, y;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            dsk[x].push_back(y);
            dsk[y].push_back(x);
        }
    }
    bool Tbfs(int s)
    {
        mau[s] = 1;
        queue<int> q;
        q.push(s);
        while (!q.empty())
        {
            int father = q.front();
            q.pop();
            for (auto v : dsk[father])
            {
                if (mau[v] == -1)
                {
                    mau[v] = 1 - mau[father];
                    q.push(v);
                }
                else if (mau[v] == mau[father])
                    return false;
            }
        }
        return true;
    }
};
void testcase()
{
    graph gr;
    gr.input();
    for (int i = 1; i <= gr.n; i++)
    {
        if (gr.mau[i] == -1 && !gr.Tbfs(i))
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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