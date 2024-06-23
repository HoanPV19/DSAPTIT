#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1005;
int g[MAX][MAX];
int buoc[MAX][MAX];
int n, m;
bool safe(int a, int b)
{
    if(a<1||b<1||a>n||b>m)
        return false;
    return true;
}
void testcase()
{
    cin >> n >> m;
    for (int i = 1; i <= n;i++)
        for (int j = 1; j <= m;j++)
        {
            cin >> g[i][j];
            buoc[i][j] = INT_MAX;
        }
    buoc[1][1] = 0;
    queue<pair<int, int>> q;
    q.push({1, 1});
    while(!q.empty())
    {
        pair<int, int> v = q.front();
        q.pop();
        int i = v.first + g[v.first][v.second];
        int j = v.second ;
        if(safe(i,j)&&buoc[i][j]>buoc[v.first][v.second]+1)
        {
            buoc[i][j] = buoc[v.first][v.second] + 1;
            q.push({i, j});
        }
        i = v.first ;
        j = v.second + g[v.first][v.second];
        if (safe(i, j) && buoc[i][j] > buoc[v.first][v.second] + 1)
        {
            buoc[i][j] = buoc[v.first][v.second] + 1;
            q.push({i, j});
        }
    }
    if(buoc[n][m]!=INT_MAX)
        cout << buoc[n][m] << '\n';
    else
        cout << "-1\n";
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}