#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
bool visited[MAX];
vector<int> path;
class graph {
public:
    int n, start, end, v;
    vector<int> dsk[MAX];
    int father[MAX];
    void input() {
        path.clear();
        memset(father,-1,sizeof(father));
        cin >> n >> v >> start >> end;
        for (int i = 1; i <= n; i++)
            visited[i] = false;
        int x, y;
        for (int i = 1; i <= v; i++) {
            cin >> x >> y;
            dsk[x].push_back(y);
        }
    }
    void bfs(int s, int T) {
        visited[s] = true;
        queue<int> q;
        q.push(s);
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int i : dsk[v]) {
                if (!visited[i]) {
                    q.push(i);
                    visited[i] = true;
                    father[i] = v;
                    if (visited[T])
                        break;
                }
            }
            if (visited[T])
                break;
        }
        if (visited[T]) {
            int tmp = T;
            while (tmp != -1) {
                path.push_back(tmp);
                tmp = father[tmp];
            }
            reverse(path.begin(), path.end()); 
            for (auto x : path)
                cout << x << " ";
            cout << '\n';
        }
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        graph gr;
        gr.input();
        gr.bfs(gr.start, gr.end);
        if (!visited[gr.end])
            cout << "-1\n";
    }
    return 0;
}