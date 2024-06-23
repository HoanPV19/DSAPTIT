#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    string s;
    cin >> s;
    stack<char> a, b;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i]=='<')
        {
            if(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
        }
        else if (s[i] == '>')
        {
            if (!b.empty())
            {
                a.push(b.top());
                b.pop();
            }
        }
        else if(s[i]=='-')
        {
            if(!a.empty())
                a.pop();
        }
        else
        {
            a.push(s[i]);
        }
    }
    while(!a.empty())
    {
        b.push(a.top());
        a.pop();
    }
    while(!b.empty())
    {
        cout << b.top();
        b.pop();
    }
}
int main()
{
    ll t=1;
    //cin >> t;
    while (t--)
    {
        testcase();
    }
}