#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    string s;
    cin >> s;
    stack <string> st;
    for (int i = s.length()-1; i>=0;i--)
    {
        if(isalpha(s[i]))
        {
            string stmp = "";
            stmp += s[i];
            st.push(stmp);
        }
        else
        {
            string tmp = st.top();
            st.pop();
            tmp += st.top();
            st.pop();
            tmp += s[i];
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