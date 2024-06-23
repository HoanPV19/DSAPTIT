#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 1005;
int dp[MAX][MAX], a[MAX], c[MAX];
void testcase()
{
    ll res = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size();i++)
    {
        string tmp="";
        for (int j = i; j < s.size();j++)
        {
            tmp += s[j];
            res += stoll(tmp);
        }
    }
    cout << res << '\n';
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