#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    stack<int> st;
    string s;
    cin >> s;
    int lenmax = 0;
    st.push(-1);
    for (int i = 0; i<s.length();i++)
    {
        if(s[i]=='(')
            st.push(i);
        else 
        {
                st.pop();
            if (!st.empty())
                lenmax = max(lenmax, i - st.top());
            if(st.empty())
                st.push(i);
        }
    }
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