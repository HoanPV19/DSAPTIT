#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 100005;
void testcase()
{
    ll n;
    cin >> n;
    ll minm = 1e9;
    vector<ll> res;
    ll a[MAX], maxne[MAX], minne[MAX], MIN = 1e16;
    ll MA = -1;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    maxne[1] = a[1];
    minne[n] = a[n];
    for (ll i = 2; i < n; i++)
        maxne[i] = max(a[i], maxne[i - 1]);
    for (ll i = n - 1; i >= 2; i--)
        minne[i] = min(a[i], minne[i + 1]);
    for (ll i = 1; i <= n - 1; i++)
    {
        if (maxne[i] <= minne[i + 1])
            res.push_back(i);
    }
    if (n == 1 || res.size() == 0)
    {
        cout << "0\n";
        return;
    }
    cout << res.size() << '\n';
    for (auto x : res)
        cout << x << " ";
    cout << '\n';
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}