#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=1005;
class graph
{
    public:
        int n, k,st;
        vector <int> dsk[MAX];
        vector <pair<int,int>> v;
        bool visited[MAX], check=false;
        void input()
        {
            int x,y;
            cin>>n>>k>>st;
            check=false;
            for(int i=1;i<=n;i++)
                visited[i]=false;
            for(int i=0;i<k;i++)
            {
                cin>>x>>y;
                dsk[x].push_back(y);
                dsk[y].push_back(x);
            }
        }
        void bfs(int s)
        {
            visited[s]=true;
            queue <int> q;
            q.push(s);
            while(!q.empty()){
                if(check)
                    return;
                int u=q.front();
                q.pop();
                for(auto a:dsk[u])
                {
                    if(!visited[a])
                    {
                        q.push(a);
                        visited[a]=true;
                        v.push_back({u,a});
                    }
                    if(v.size()==n-1)
                    {
                        check=true;
                        return;
                    }
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
        gr.bfs(gr.st);
        if(gr.check)
        {
            //sort(gr.v.begin(),gr.v.end());
            for(auto p:gr.v)
            {
                cout<<p.first<<" "<<p.second<<'\n';
            }
        }
        else
        {
            cout<<"-1\n";
        }
    }
}