#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
void testcase()
{
    int n;
    cin >> n;
    stack <int>sl, sb;
    vector<int> lonhon(n, -1);
    vector<int> behon(n, -1);
    int a[n];
    for (int i = 0; i<n;i++)
        cin >> a[i];
    for (int i = n-1; i >=0 ;i--)
    {
        if(!sl.empty())
        {
            while(!sl.empty()&&a[i]>=a[sl.top()])
                sl.pop();
            if(!sl.empty())
                lonhon[i] = sl.top();
        }
        sl.push(i);
    }
    for (int i = n-1; i >=0; i--)
    {
        if (!sb.empty())
        {
            while (!sb.empty() && a[i] <= a[sb.top()])
                sb.pop();
            if (!sb.empty())
                behon[i] = sb.top();
        }
        sb.push(i);
    }
    for (int i = 0; i < n;i++)
    {
        if(lonhon[i]==-1||behon[lonhon[i]]==-1)
            cout << "-1 ";
        else
            cout << a[behon[lonhon[i]]] << ' ';
    }
    cout << '\n';
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