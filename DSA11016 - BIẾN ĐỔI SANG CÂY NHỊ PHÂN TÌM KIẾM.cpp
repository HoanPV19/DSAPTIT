#include <bits/stdc++.h>
using namespace std;
vector <int> dsk[1005];
vector <vector <int>> p;
vector <int> path;
void testcase()
{
	set<int> se;
	int u,v, n;
	char c;
	cin>>n;
	while(n--)
	{
		cin>>u>>v>>c;
		se.insert(u);
		se.insert(v);
	}
	for(auto x:se)
		cout<<x<<' ';
	cout<<'\n';
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