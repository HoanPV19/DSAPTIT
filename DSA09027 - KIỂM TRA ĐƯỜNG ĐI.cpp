#include <iostream>
#include <cstring>
#include <vector>
#define MAX 1005
using namespace std;
bool visited[MAX];
vector <int> path;
class graph{
    public:
    int n,start, end,v;
     vector<int> dsk[MAX]; 
    void input()
    {
        cin>>n>>v;
        int x,y;
        for(int i=1;i<=v;i++)
        {
            cin>>x>>y;
            dsk[x].push_back(y);
            dsk[y].push_back(x);
        }
    }
    void ktao()
    {
        for(int i=1;i<=n;i++)
            visited[i]=false;
    }
    void dfs(int s,int T)
    {
        visited[s]=true;
        if(s==T)
            return;
        for(auto k:dsk[s])
        {
            if(!visited[k])
            {
                dfs(k,T);
            }
        }
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
        int q;
        cin>>q;
        while(q--)
        {
            gr.ktao();
            int x,y;
            cin>>x>>y;
            gr.dfs(x,y);
            if(!visited[y])
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
    }
}