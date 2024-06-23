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
            for(int i=0;i<k;i++)
            {
                cin>>x>>y;
                dsc[x].push_back(y);
                dsc[y].push_back(x);
            }
        }
        void reinit()
        {
            for(int i=1;i<=n;i++)
                visited[i]=0;
        }
        void dfs(int s,int bo)
        {
            visited[s]=1;
            for(auto v:dsc[s])
            {
                if(!visited[v]&&v!=bo)
                    dfs(v,bo);
            }
        }
        void ktr()
        {
            for(int i=1;i<=n;i++)
            {   reinit();
                if(i==1)
                    dfs(2,1);
                else
                    dfs(1,i);
                for(int j=1;j<=n;j++)
                    if(!visited[j]&&j!=i)
                    {
                        cout<<i<<" ";
                        break;
                    }
                }
                 cout<<'\n';
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