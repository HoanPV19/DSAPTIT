#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
bool visited[100];
int n, k;
set <string> res;
void ql(vector <string> &v, int start, int len, string s)
{
	if(len==k)
	{
		res.insert(s);
		return;
	}
	for(int i=start;i<v.size();i++)
	{
		ql(v,i+1,len+1,s+v[i]+" ");
	}
}
void testcase()
{
	cin>>n>>k;
	string s;
	set <string> se;
	memset(visited,false,sizeof visited);
	for(int i=0;i<n;i++)
	{
		cin>>s;
		se.insert(s);
	}
	vector <string> v(se.begin(),se.end());
	ql(v,0,0,"");
	for(auto x:res)
	{
		cout<<x<<'\n';
	}
	res.clear();
}
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--)
	{
		testcase();
	}
	return 0;
}