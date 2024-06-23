#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = 0; i < s.size();i++)
    {
        if(isalpha(s[i]))
        {
            string a = "";
            a += s[i];
            st.push(a);
        }
        else
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("(" + b + s[i] + a + ")");
        }
    }
    cout << st.top() <<'\n';
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