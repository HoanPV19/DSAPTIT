#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1000005;
void testcase()
{
    int n, x;
    cin >> n;
    vector<int> a(n);
    int d1 = 0, d2 = 0, d0 = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        if(a[i]%3==1)
            ++d1;
        else if(a[i]%3==2)
            ++d2;
        else
            ++d0;
    }
    if(d0==0)
    {
        if((d1<3&&d2==0)||(d2<3&&d1==0))
        {
            cout << "-1\n";
            return;
        }
    }
    sort(a.begin(), a.end(),greater<int>());
        if ((d1 - 1) % 3 == d2 % 3)
            --d1;
        else if ((d2 - 1) % 3 == d1 % 3)
            --d2;
        if(d1%3==2&&d2==0)
            d1 -= 2;
        else if(d2%3==2&&d1==0)
            d2 -= 2;
    for (int i = 0; i < n;i++)
    {
        if(a[i]%3==1&&d1)
        {
            cout << a[i];
            --d1;
        }
        else if(a[i]%3==2&&d2)
        {
            cout << a[i];
            --d2;
        }
        else if(a[i]%3==0&&d0)
        {
            cout << a[i];
            --d0;
        }
        if(!d1&&!d2&&!d0)
            break;
    }
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}