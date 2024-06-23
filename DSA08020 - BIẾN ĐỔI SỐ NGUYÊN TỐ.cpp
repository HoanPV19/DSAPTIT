#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 15;
int buoc[10000];
bool nt[10000];
void SNT()
{
    for (int i = 2; i <= 9999; i++)
    {
        for (int j = i * i; j <= 9999; j += i)
        {
            nt[j] = true;
        }
    }
}
void testcase()
{
    string a, b;
    cin >> a >> b;
    for (int i = 1000; i < 9999; i++)
        buoc[i] = INT_MAX;
    buoc[stoi(a)] = 0;
    queue<string> q;
    q.push(a);
    while (!q.empty())
    {
        string v = q.front();
      //  cout << v << ' '<<buoc[stoi(v)]<<'\n';
        q.pop();
        string tmp = v;
        int ok = 0;
        for (int i = 0; i < 4; i++)
        {
            tmp = v;
            for (int j = 0; j <= 9; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                tmp[i] = j + '0';
                if (!nt[stoi(tmp)] && buoc[stoi(tmp)] > buoc[stoi(v)] + 1)
                {
                    buoc[stoi(tmp)] = buoc[stoi(v)] + 1;
                    if(tmp==b)
                    {
                        ok = 1;
                        break;
                    }
                    q.push(tmp);  
                }
            }
            if(ok)
                break;
        }
    }
    if (buoc[stoi(b)] != INT_MAX)
        cout << buoc[stoi(b)] << '\n';
    else
        cout << "-1\n";
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    SNT();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}