#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    stack<char> st;
    string s;
    cin >> s;
    ll lenmax = 0;
    ll cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push('(');
        else if (!st.empty())
        {
            st.pop();
            cnt += 2;
        }
        else
        {
            lenmax += cnt;
            cnt = 0;
        }
    }
    if(cnt)
        lenmax += cnt;
    cout << lenmax << '\n';
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