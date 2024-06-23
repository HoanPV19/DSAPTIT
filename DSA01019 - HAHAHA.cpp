#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
vector <string> v;
void testcase()
{
	int n;
	cin>>n;
	for(int i=0;i<v.size();i++)
	{
		if(v[i].size()==n&&v[i][v[i].size()-1]=='A')
			cout<<v[i]<<'\n';
		else if(v[i].size()>n)
			break;
	}
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	queue <string> q;
		q.push("H");
	while(q.front().size()<=15)
	{
		string s=q.front();
		q.pop();
		q.push(s+"A");
		v.push_back(s+"A");
		if(s[s.size()-1]=='A')
		{
			v.push_back(s+"H");
			q.push(s+"H");
		}
	}
	while(t--)
	{
		testcase();
	}
}