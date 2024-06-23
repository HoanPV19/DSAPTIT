#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1005;
int main()
{
    int t;
    cin >> t;
    bool dp[MAX][MAX];
    while (t--)
    {
        int n, res = 1;
        string s;
        cin >> s;
        n = s.length();
        memset(dp, false, sizeof(dp));
        for (int i = 0; i < n;i++)
            dp[i][i] = true;
        for (int len = 2; len <= n; len++)
        {
            for (int i = 0; i < n-len+1;i++)
            {
                int j = i + len - 1;
                if(len==2&&s[i]==s[j])
                    dp[i][j] = true;
                else
                dp[i][j] = dp[i + 1][j - 1] && (s[i]==s[j]);
                if(dp[i][j])
                    res = max(res, len);
            }
        }
        cout << res << '\n';
    }
}