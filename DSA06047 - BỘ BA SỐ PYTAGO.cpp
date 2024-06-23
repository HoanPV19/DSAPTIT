#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 100005;
ll a[MAX];
bool bsearch(int l, int r, ll x)
{
    while(l<=r)
    {
        int mid = l + (r - l) / 2;
        if(a[mid]==x)
            return true;
        else if(a[mid]<x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return false;
}
void testcase()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
        a[i] *= a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n - 2;i++)
    {
        for (int j = n; j >i;j--)
        {
            if(bsearch(i,j,a[j]-a[i]))
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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