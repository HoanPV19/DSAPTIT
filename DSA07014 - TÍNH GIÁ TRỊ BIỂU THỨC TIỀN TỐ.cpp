#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    stack<int> st;
    string s;
    cin >> s;
    for (int i = s.length()-1; i>=0;i--)
    {
       if(isdigit(s[i]))
           st.push(s[i] - '0');
        else 
        {
            int a, b;
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            if(s[i]=='+')
                st.push(a + b);
            else if(s[i]=='-')
                st.push(a - b);
            else if(s[i]=='*')
                st.push(a * b);
            else
                st.push(a / b);
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