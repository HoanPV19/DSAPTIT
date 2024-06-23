#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    stack<ll> st;
    string s;
    cin >> s;
    for (ll i = 0; i<s.length();i++)
    {
        if(isdigit(s[i]))
        {
            st.push(s[i] - '0');
        }
        else
        {
            ll b = st.top();
            st.pop();
            ll a = st.top();
            st.pop();
            ll tmp = 0;
            if(s[i]=='+')
            {
                tmp = (a+ b);
            }
            else if(s[i]=='-')
            {
                tmp = (a - b);
            }
            else if(s[i]=='*')
            {
                tmp =(a * b);
            }
            else
            {
                tmp = (a / b);
            }
            st.push(tmp);
        }
    }
    cout << st.top() << '\n';
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