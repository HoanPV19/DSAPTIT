#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
class graph
{
    public:
        int n, visited[1005];
        vector <int> dsc[1005];
        void input()
        {
            int k;
            cin>>n>>k;
            int x,y;
            for(int i=1;i<=n;i++)
                visited[i]=0;
            for(int i=0;i<k;i++)
            {
                cin>>x>>y;
                dsc[x].push_back(y);
                dsc[y].push_back(x);
            }
        }
        bool dfs(int s,int father)
        {
            visited[s]=1;
            for(auto v:dsc[s])
            {
                if(!visited[v])
                    return true;
                return dfs(v,s);
            }
            return false;
        }
        void ktr()
        {
            for(int i=1;i<=n;i++)
            {
                if(!visited[i])
                {
                    if(dfs(i,0))
                    {
                        cout<<"YES\n";
                        return;
                    }
                }
            }
            cout<<"NO\n";
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n;
        set <int> se;
        for(int i=0;i<n-1;i++)
        {
            cin>>x>>y;
            se.insert(x);
            se.insert(y);
        }
        if(se.size()!=n)
            cout<<"NO\n";
        else    
            cout<<"YES\n";
    }
}