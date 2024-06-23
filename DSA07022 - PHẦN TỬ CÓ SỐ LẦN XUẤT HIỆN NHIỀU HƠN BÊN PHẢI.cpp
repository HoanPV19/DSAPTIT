#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    int n;
    cin >> n;
    map<int,int> mp;
    int a[n];
    vector<int> cnt(n, -1);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    stack<int> st;
    for (int i = n-1; i >= 0;i--)
    {
        if(!st.empty())
        {
            while(!st.empty()&&mp[a[i]]>=mp[st.top()])
                st.pop();
            if(!st.empty())
                cnt[i] = st.top();
        }
        st.push(a[i]);
    }
    for (int i = 0; i < n;i++)
    {
        cout << cnt[i] << " ";
    }
    cout << '\n';
}
int main()
{
     cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
    ll t=1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}