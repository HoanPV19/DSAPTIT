#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class graph
{
    public:
        int n, visited[1005], check=0;
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
        void dfs(int s,int father)
        {
            visited[s]=1;
            for(auto v:dsc[s])
            {
                if(visited[v]&&v!=father)
                {
                    check=1;
                    return;
                }
                if(!visited[v])
                     dfs(v,s);
            }
        }
        void ktr()
        {
            for(int i=1;i<=n&&!check;i++)
            {
                if(!visited[i])
                    {
                        dfs(i,0);
                    }
            }
            if(check)
            {
                cout<<"YES\n";
            }
            else    cout<<"NO\n";
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        graph gr;
    gr.input();
    gr.ktr();
    }
}