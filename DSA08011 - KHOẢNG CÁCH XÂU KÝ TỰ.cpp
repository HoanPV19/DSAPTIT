#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
set<string> se;
int bfs(string s, string end)
{
    if(s==end||se.count(end)==0)
        return 0;
    queue<pair<string,int>> q;
    q.push({s,1});
    int res=INT_MAX;
    while(!q.empty())
    {
        pair<string, int> v=q.front();
        q.pop();
        if(v.first==end)
            return v.second;
        string tmp=v.first;
        for(int i=0;i<tmp.size();i++)
        {
            char goc=tmp[i];
            for(int j='A';j<='Z';j++)
            {
                tmp[i]=j;
                if(se.count(tmp))
                {
                    if(tmp==end)
                        return v.second+1;
                    se.erase(tmp);
                    q.push({tmp,v.second+1});
                }
            }
            tmp[i]=goc;
        }
    }
}
void testcase()
{
    se.clear();
    int n;
    cin >> n;
    string tmp, a,b;
    cin>>a>>b;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        se.insert(tmp);
    }
    cout<<bfs(a,b)<<'\n';
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