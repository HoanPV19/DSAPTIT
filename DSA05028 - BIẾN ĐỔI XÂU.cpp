#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 105;
const ll mod = 1e9 + 7;
void testcase()
{
    string s1, s2;
    cin >> s1 >> s2;
    int dp[MAX][MAX];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= s1.size(); i++)
        {
            for (int j = 0; j <= s2.size(); j++)
            {
                if(i==0||j==0)
                    dp[i][j] = i + j;
                else if (s1[i-1] == s2[j-1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                        dp[i][j] = min({dp[i-1][j-1],dp[i-1][j], dp[i][j - 1]})+1;
                }
            }
        }
        cout << dp[s1.size()][s2.size()] << '\n';
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