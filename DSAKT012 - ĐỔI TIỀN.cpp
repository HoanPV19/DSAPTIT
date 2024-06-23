#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX=1000;
int a[MAX][MAX];
bool visited[MAX][MAX];
int k;
int n, sum, res=INT_MAX;
void ql(int to,int start, int su,vector <int> &v)
{
	if(su>sum)
		return;
	if(su==sum)
	{
		res=min(res,to);
		return;
	}
	for(int i=start;i<v.size();i++)
		ql(to+1,i+1,su+v[i],v);
}
void testcase()
{
	cin>>n>>sum;
	int x;
	res=INT_MAX;
	vector <int> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end(),greater <int>());
	ql(0,0,0,v);
	if(res==INT_MAX)
		cout<<"-1\n";
	else
		cout<<res;
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