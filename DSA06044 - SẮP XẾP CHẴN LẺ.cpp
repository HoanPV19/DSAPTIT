#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 100005;
ll a[MAX];
void testcase()
{
    int n, x;
    cin >> n;
    vector<int> lup, cdown;
    for (int i = 1; i <= n;i++)
    {
        cin >> x;
        if(i%2)
            lup.push_back(x);
        else
            cdown.push_back(x);
    }
    sort(lup.begin(), lup.end());
    sort(cdown.begin(), cdown.end(), greater<int>());
    int m = 0, k = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i%2)
            cout << lup[m++] << " ";
        else
            cout << cdown[k++] << " ";
    }
}
int main()
{
    int t;
    t = 1;
    while (t--)
    {
        testcase();
    }
}