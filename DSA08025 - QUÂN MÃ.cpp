#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 15;
int g[MAX][MAX];
int buoc[MAX][MAX];
int n=8, m=8;
int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
bool safe(int a, int b)
{
    if(a<1||b<1||a>n||b>m)
        return false;
    return true;
}
void testcase()
{
    string s, t;
    cin >> s >> t;
    int SJ=s[1]-'0', SI=s[0]-'a'+1;
    int EJ = t[1] - '0', EI = t[0] - 'a' + 1;
    for (int i = 1; i <= n;i++)
        for (int j = 1; j <= m;j++)
        {
            buoc[i][j] = INT_MAX;
        }
    buoc[SI][SJ] = 0;
    queue<pair<int, int>> q;
    q.push({SI, SJ});
    while(!q.empty())
    {
        pair<int, int> v = q.front();
        q.pop();
        for (int i = 0; i < n;i++)
        {
            int x = v.first+dx[i];
            int y = v.second + dy[i];
            if(safe(x,y)&&buoc[x][y]>buoc[v.first][v.second]+1)
            {
                buoc[x][y] = buoc[v.first][v.second] + 1;
                q.push({x, y});
            }
        }
    }
    if(buoc[EI][EJ]!=INT_MAX)
        cout << buoc[EI][EJ] << '\n';
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