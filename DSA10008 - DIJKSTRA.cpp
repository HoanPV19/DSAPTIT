#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
class graph
{
public:
    vector<pair<int, int>> p[MAX];
    ll d[MAX];
    int n, k, start;
    void input()
    {
        cin >> n >> k >> start;
        ll x, y, w;
        for (int i = 1; i <= n;i++)
            d[i] = INT_MAX;
        for (int i = 1; i <= k; i++)
            {
                cin >> x >> y >> w;
                p[x].push_back({y, w});
                p[y].push_back({x, w});
            }   
        d[start] = 0;
    }
    void dijkstra()
    {
        priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
        pq.push({0, start});
        while(!pq.empty())
        {
            ll c = pq.top().first;
            ll u = pq.top().second;
            pq.pop();
            if(c>d[u])
                continue;
            for (auto e:p[u])
            {
                ll v = e.first;
                ll w = e.second;
                if(d[v]>d[u]+w)
                {
                    d[v] = d[u] + w;
                    pq.push({d[v], v});
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << d[i] << " ";
        }
        cout << '\n';
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        graph gr;
        gr.input();
        gr.dijkstra();
    }
}