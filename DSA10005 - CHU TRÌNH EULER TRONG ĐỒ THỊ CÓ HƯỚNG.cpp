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
    int input()
    {
        cin>>n>>v;
        int x,y;
        vector <pair<int,int>> el(n+1,{0,0});
        for(int i=1;i<=v;i++)
        {
            cin>>x>>y;
            el[x].first++;
            el[y].second++;
        }
        for(int i=1;i<=n;i++)
        {
            if(el[i].first!=el[i].second)
                return 0;
        }
        return 1;
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
        cout<<gr.input()<<'\n';
    }
}