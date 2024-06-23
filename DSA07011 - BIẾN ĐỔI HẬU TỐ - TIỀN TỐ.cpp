#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    stack<string> st;
    string s;
    cin >> s;
    for (int i = 0; i<s.length();i++)
    {
       if(isalpha(s[i]))
        {
            string a = "";
            st.push(a+s[i]);
        }
        else 
        {
            string b = st.top();
            st.pop();
            string a= st.top();
            st.pop();
            st.push(s[i] + a + b);
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