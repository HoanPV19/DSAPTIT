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
        int x, y;
        for (int i = 1; i <= v; i++) {
            cin >> x >> y;
            dsk[x].push_back(y);
            dsk[y].push_back(x);
        }
    }
	void ktao()
	{
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
        for(int i=1;i<=gr.n;i++)
        {
            gr.ktao();
			visited[i]=true;
			if(i==1)
				gr.dfs(2);
			else
				gr.dfs(1);
			bool check=false;
			for(int j=1;j<=gr.n;j++)
			{
				if(!visited[j])
				{
					check=true;
					break;
				}
			}
			if(check)
				cout<<i<<" ";
		}
        cout<<'\n';
    }
    return 0;
}