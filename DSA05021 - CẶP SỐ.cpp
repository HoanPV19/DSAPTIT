#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dp[30];
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n;i++)
        {
            cin >> p[i].first >> p[i].second;
            dp[i] = 1;
        }
        int m = 0;
        sort(p.begin(), p.end(), cmp);
        for (int i = 1; i < n;i++)
        {
            for (int j = 0; j < i;j++)
            {
                if(p[j].second<p[i].first)
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            m = max(m, dp[i]);
        }
        cout << m << '\n';
    }
}