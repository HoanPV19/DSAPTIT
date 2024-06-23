#include <bits/stdc++.h>
using namespace std;
const int MAX=1005;
class graph
{
	public:
		int n, res;
		bool mark[MAX];
		vector <int> dsk[MAX];
		void dfs(int s,int t, int d)
		{
			mark[s]=true;
			if(d>=res)
				return;
			if(s==t)
			{
				res=min(res,d);
				return;
			}
			for(int u:dsk[s])
			{
				if(!mark[u])
				{
					dfs(u,t,d+1);
					mark[u]=false;
				}
			}
		}
		void input()
		{
			cin>>n;
			int x,y;
			for(int i=0;i<n-1;i++)
			{
				cin>>x>>y;
				dsk[x].push_back(y);
				dsk[y].push_back(x);
			}
			int Q;
			cin>>Q;
			while(Q--)
			{
				memset(mark,false,sizeof mark);
				res=1e9;
				cin>>x>>y;
				dfs(x,y,0);
				cout<<res<<'\n';
			}
		}
};
void testcase()
{
	graph gr;
	gr.input();
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