#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 100005;
bool bsearch(int l, int r, ll a[], ll x)
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ok = 0;
        ll k;
        cin >> n >> k;
        ll dp[MAX], a[MAX];
        int moc = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> dp[i];
            dp[i] += dp[i - 1];
            if(!moc&&dp[i]>=k)
                moc = i;
        }
        if(moc==0)
        {
            cout << "NO\n";
            continue;
        }
        for (int i = moc; i <= n;i++)
        {
            if(bsearch(0,i-1,dp,dp[i]-k))
            {
                ok = 1;
                cout << "YES\n";
                break;
            }
        }
        if(!ok)
            cout << "NO\n";
    }
}