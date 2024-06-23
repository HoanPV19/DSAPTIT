#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
int n, k;
vector <string> res;
void ql(int start, string s, int sum,vector<int> &v)
{
	if(sum>k)
		return;
	if(sum==k)
	{
		s.pop_back();
		s+="]";
		res.push_back(s);
		return;
	}
	for(int i=start;i<v.size();i++)
	{
		ql(i+1,s+to_string(v[i])+" ",sum+v[i],v);
	}
}
void testcase()
{
	cin>>n>>k;
	vector <int> v;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	ql(0,"[",0,v);
	if(res.empty())
	{
		cout<<"-1\n";
		return;
	}
	for(auto x:res)
	{
		cout<<x<<" ";
	}
	cout<<'\n';
	res.clear();
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