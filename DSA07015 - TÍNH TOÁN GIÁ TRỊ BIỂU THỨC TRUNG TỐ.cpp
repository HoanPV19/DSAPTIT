#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
int lv(char c)
{
    if (c == '*' || c == '/')
        return 2;
    if (c == '-' || c == '+')
        return 1;
    if (c == '^' || c == '%')
        return 3;
    return 0;
}
void testcase()
{
    string s, rong = "";
    cin >> s;
    stack<char> st;
    vector<string> res;
    for (int i = 0; i < s.size(); i++)
    {
        string so = "";
        if (s[i] == '(')
            st.push('(');
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res.push_back(rong+st.top());
                st.pop();
            }
            st.pop();
        }
        else if (!isdigit(s[i]))
        {
            while (!st.empty() && lv(s[i]) <= lv(st.top()))
            {
                res.push_back(rong + st.top());
                st.pop();
            }
            st.push(s[i]);
        }
        else
        {
            while (isdigit(s[i]))
            {
                so += s[i++];
            }
            --i;
            res.push_back(so);
        }
    }
    while (!st.empty())
    {
        if (st.top() != '(')
            res.push_back(rong+st.top());
        st.pop();
    }
    stack <string> tmp;
    for (auto x:res)
    {
        //cout << x << " ";
        if (isdigit(x[0]))
            tmp.push(x);
        else
        {
            string a = tmp.top();
            tmp.pop();
            string b = tmp.top();
            tmp.pop();
            if(x=="/")
            {
                tmp.push(to_string(stoll(b) / stoll(a)));
            }
            else if (x == "*")
            {
                tmp.push(to_string(stoll(b) * stoll(a)));
            }
            else if (x == "-")
            {
                tmp.push(to_string(stoll(b) - stoll(a)));
            }
            else
                tmp.push(to_string(stoll(b) + stoll(a)));   
        }
    }
    cout << tmp.top() << '\n';
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}