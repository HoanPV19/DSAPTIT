#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	int n;
	queue <string> q;
	q.push("6");
	q.push("8");
	vector <string> v;
	while(q.front().size()<=15)
	{
		string s=q.front();
		v.push_back(s);
		q.pop();
		q.push(s+"6");
		q.push(s+"8");
	}
	while(t--)
	{
		cin>>n;
		int i=0;
		while(v[i].size()<=n)
			++i;
		cout<<i<<'\n';
		while(i>0)
			cout<<v[--i]<<" ";
		cout<<'\n';
	}
}