#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod = 1e9 + 7;
ll C[MAX][MAX];
ll th(int n, int m)
{
    if (m == 0 || m == n)
        return 1;
    if (m == 1)
        return n;
    if(C[n][m])
        return C[n][m];
    if(C[n][n-m])
        return C[n][n - m];
    C[n][m]=(th(n - 1,m - 1) + th(n - 1,m)) % mod;
    return C[n][m];
}
void testcase()
{
    int n, m;
    cin >> n >> m;
    cout << th(n, m) << '\n';
}
int main()
{
    int t = 1;
    cin >> t;
    memset(C, 0, sizeof(C));
    while (t--)
    {
        testcase();
    }
    return 0;
}