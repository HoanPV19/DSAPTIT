#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    string s;
    cin >> s;
    s = "[" + s + "]";
    stack<string> st;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i]!=']')
            st.push(string(1, s[i]));
        else
        {
            string tmp="";
            while(!st.empty()&&st.top()!="[")
            {
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            string so = "";
            while(!st.empty()&&isdigit(st.top()[0]))
            {
                so = st.top() + so;
                st.pop();
            }
            string k = "";
            if(so=="")
                so = "1";
            for (int j = 0; j < stoi(so); j++)
                k += tmp;
            st.push(k);
        }
    }
    cout << st.top() << '\n';
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