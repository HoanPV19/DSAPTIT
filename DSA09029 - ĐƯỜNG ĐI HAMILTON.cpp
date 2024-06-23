#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
bool visited[MAX];
vector<int> path;
class graph {
public:
    int n, start, end, v,ok=false;
    vector<int> dsk[MAX];
    void input() {
        cin >> n >> v ;
        for (int i = 1; i <= n; i++)
            visited[i] = false;
        int x, y;
        for (int i = 1; i <= v; i++) {
            cin >> x >> y;
            dsk[x].push_back(y);
            dsk[y].push_back(x);
        }
    }
    void dfs(int s,int cnt) {
        visited[s] = true;
        if(ok)
            return;
        if(cnt==n)
        {
            ok=true;
            return;
        }
        for(int x:dsk[s])
        {
            if(!visited[x])
            {
                dfs(x,cnt+1);
                visited[x] = false;
            }
        }
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        graph gr;
        gr.input();
        for(int i=1;i<=gr.n&&!gr.ok;i++)
        {
            for (int j = 1; j <= gr.n; j++)
                visited[j] = false;
            gr.dfs(i,1);
        }
        cout<<gr.ok<<'\n';
    }
    return 0;
}