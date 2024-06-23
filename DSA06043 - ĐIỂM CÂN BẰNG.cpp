#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1000005;
ll a[MAX];
void testcase()
{
    int n;
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n;i++)
    {
       if(a[n]-a[i-1]==a[i])
        {
            cout << i << '\n';
            return;
        }
    }
    cout << "-1\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}