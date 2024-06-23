#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
int dx[8] = {-1,-1,1,1,-1, 0, 1, 0};
int dy[8] = {-1,1,1,-1,0, 1, 0, -1};
char a[MAX][MAX];
int n, m;
void dfs(int i, int j)
{
    a[i][j] = '.';
    for (int k = 0; k < 8;k++)
    {
        int x = i + dx[k], y = j + dy[k];
        if(i>=0&&j>=0&&i<n&&j<m&&a[x][y]=='W')
            dfs(x, y);
    }
}
void testcase()
{
    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        for (int j= 0; j < m;j++)
            cin >> a[i][j];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]=='W')
            {
                ++cnt;
                dfs(i, j);
            }
        }
    }
    cout << cnt << '\n';
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