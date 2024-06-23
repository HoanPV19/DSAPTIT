#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX=1000;
int a[MAX][MAX];
bool visited[MAX][MAX];
int k;
vector <string> res;
int n, sum;
void ql(string s,int start, int su,vector <int> &v)
{
	if(su>sum)
		return;
	if(su==sum)
	{
		s.pop_back();
		res.push_back(s+"]");
		return;
	}
	for(int i=start;i<n;i++)
	{
		ql(s+to_string(v[i])+" ",i,su+v[i],v);
	}
}
void testcase()
{
	res.clear();
	cin>>n>>sum;
	int x;
	vector <int> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	ql("[",0,0,v);
	if(res.empty())
	{
		cout<<"-1\n";
		return;
	}
	for(auto x:res)
		cout<<x;
	cout<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		testcase();
	}
	return 0;
}