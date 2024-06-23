#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
bool visited[MAX];
vector<int> path;
class graph {
public:
    int n, start, end, v;
	bool ok=false;
    vector<int> dsk[MAX];
    void input() {
        cin >> n >> v ;
        int x, y;
        for (int i = 1; i <= v; i++) {
            cin >> x >> y;
            dsk[x].push_back(y);
        }
    }
	void ktao()
	{
		ok=false;
		for (int i = 1; i <= n; i++)
            visited[i] = false;
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
		gr.ktao();
        gr.input();
		bool check=false;
        for(int i=1;i<=gr.n;i++)
        {
			gr.dfs(i);
            for(int j=1;j<=gr.n;j++)
				if(!visited[j])
				{
					check=true;
					break;
				}
			if(check)
				break;
        }
        if(check)
			cout<<"NO\n";
		else
			cout<<"YES\n";
    }
    return 0;
}