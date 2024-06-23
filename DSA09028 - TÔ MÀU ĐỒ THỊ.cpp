#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
const ll mod= 1e9+7;
class graph
{
    public:
        int n, k, m,  ok=0, dd=0;
        int mau[MAX]={0};
        bool visited[MAX];
        vector <int> dsk[MAX];
        void reinit()
        {
            for(int i=1;i<=n;i++)
                visited[i]=false;
        }
        bool check(int s, int c)
        {
            for(auto v:dsk[s])
            {
                if(mau[v]&&c==mau[v])
                    return false;
            }
            return true;
        }
        void input()
        {
            cin>>n>>k>>m;
            int x,y;
            for(int i=0;i<k;i++)
            {
                cin>>x>>y;
                dsk[x].push_back(y);
                dsk[y].push_back(x);
            }
            mau[1]=1;
        }
        void Tdfs(int s)
        {
            if(ok)
                return;
            if(s==n+1)
            {
                ok=1;
                return;
            }
            for(int i=1;i<=m;i++)
            {
                if(check(s,i))
                {
                    mau[s]=i;
                    Tdfs(s+1);
                    mau[s]=0;
                }
            }
        }
};
void testcase()
{
    graph gr;
    gr.reinit();
    gr.input();
    gr.Tdfs(1);
    if(!gr.ok)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        testcase();
    }
}