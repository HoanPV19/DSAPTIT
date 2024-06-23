#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 100005;
ll a[MAX];
void testcase()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    ll MIN = 1e18;
    sort(a, a + n);
    for (int i = 0; i < n - 1;i++)
    {
        MIN = min(MIN, a[i + 1] - a[i]);
    }
    cout << MIN << '\n';
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