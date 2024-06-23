#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
set<string> v;
void xl(string s)
{
    stack<int> st;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i]=='(')
            st.push(i);
        else if(s[i]==')')
        {
            string tmp = "";
            for (int j = 0; j < s.size();j++)
                if(j!=i&&j!=st.top())
                    tmp += s[j];
            st.pop();
            if(v.count(tmp)==0)
            {
                v.insert(tmp);
                xl(tmp);
            }
        }
    }
}
void testcase()
{
    string s;
    cin >> s;
    xl(s);
    for(auto x:v)
        cout << x << "\n";
}
int main()
{
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        testcase();
    }
}