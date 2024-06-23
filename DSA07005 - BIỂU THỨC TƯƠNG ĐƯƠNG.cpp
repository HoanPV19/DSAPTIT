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
    string s;
    cin >> s;
    s = "(" + s + ")";
    stack<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=')')
            st.push(string(1,s[i]));
        else
        {
            string tmp = "";
            while(!st.empty()&&st.top()!="(")
            {
                tmp = st.top()+tmp;
                st.pop();
            }
            st.pop();
            if(!st.empty()&&st.top()=="-")
                for(auto &x:tmp)
                {
                    if(x=='-')
                        x = '+';
                    else if(x=='+')
                        x = '-';
                }
            st.push(tmp);
        }
    }
        cout << st.top()<< '\n';
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