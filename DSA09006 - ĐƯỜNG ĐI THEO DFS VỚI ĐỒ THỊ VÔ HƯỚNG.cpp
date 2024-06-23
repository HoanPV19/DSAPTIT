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
        path.clear();
        cin>>n>>v>>start>>end;
        for(int i=1;i<=n;i++)
            visited[i]=false;
        int x,y;
        for(int i=1;i<=v;i++)
        {
            cin>>x>>y;
            dsk[x].push_back(y);
            dsk[y].push_back(x);
        }
    }
    void dfs(int s,int T)
    {
        path.push_back(s);
        visited[s]=true;
        if(s==T)
        {
            for(auto x:path)
                cout<<x<<" ";
            cout<<'\n';
        }
        for(auto k:dsk[s])
        {
            if(!visited[k])
            {
                dfs(k,T);
                path.pop_back();
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
        gr.dfs(gr.start,gr.end);
        if(!visited[gr.end])
            cout<<"-1\n";
    }
}