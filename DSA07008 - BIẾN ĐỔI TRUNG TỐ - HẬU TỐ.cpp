#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
int lv(char c)
{
    if(c=='('||c==')')
        return 0;
    if(c=='*'||c=='/')
        return 2;
    if(c=='-'||c=='+')
        return 1;
    if(c=='^'||c=='%')
        return 3;
}
void testcase()
{
    string s,res="";
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i]=='(')
            st.push('(');
        else if(s[i]==')')
        {
            while(!st.empty()&&st.top()!='(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if(!isalpha(s[i]))
        {
            while(!st.empty()&&lv(s[i])<=lv(st.top()))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else
            res += s[i] ;
    }
    while (!st.empty())
    {
        if (st.top() != '(')
            res += st.top();
        st.pop();
    }
    cout << res << '\n';
}
int main()
{
    ll t=1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}