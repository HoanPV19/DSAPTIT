#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
bool visited[MAX];
vector<int> path;
class graph {
public:
    int n, start, end, v,cnt=0;
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
    void dfs(int s) {
        visited[s] = true;
        for(int x:dsk[s])
        {
            if(!visited[x])
                dfs(x);
        }
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        graph gr;
        gr.input();
        for(int i=1;i<=gr.n;i++)
        {
            if(!visited[i])
            {
                ++gr.cnt;
                gr.dfs(i);
            }
        }
        cout<<gr.cnt<<'\n';
    }
    return 0;
}