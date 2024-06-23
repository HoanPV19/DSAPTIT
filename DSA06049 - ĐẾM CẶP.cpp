#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 100005;
ll a[MAX];
int bsearch(int l, int r, ll x)
{
    while(l<=r)
    {
        int mid = l + (r - l) / 2;
        if(a[mid]<=x)
            l = mid+1;
        else
            r = mid - 1;
    }
    return l-1;
}
void testcase()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
    }
    ll cap = 0;
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n;i++)
    {
        cap+=bsearch(i + 1, n, a[i] + k-1) - i;
    }
    cout << cap << '\n';
}
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}