#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
int C[MAX][MAX];
void testcase()
{
    int h = 0;
    int n, m;
    cin >> n >> m;
    memset(C, 0, sizeof(C));
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= m;j++)
        {
            cin >> C[i][j];
            if(C[i][j]*C[i-1][j-1]*C[i][j-1]*C[i-1][j]!=0)
            C[i][j] = min({C[i - 1][j - 1], C[i - 1][j], C[i][j - 1]})+1;
            h = max(h, C[i][j]);
        }
    }
    cout << h << '\n';
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
    return 0;
}