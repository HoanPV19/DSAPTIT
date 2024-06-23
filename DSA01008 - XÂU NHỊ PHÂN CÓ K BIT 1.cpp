#include <bits/stdc++.h>
using namespace std;
vector<string> v[17];
void sinh()
{
	queue<string> q;
	q.push("0");
	q.push("1");
	while(q.front().size()<=17)
	{
		string s=q.front();
		q.pop();
		v[s.size()].push_back(s);
		q.push(s+"0");
		q.push(s+"1");
	}
}
bool check(string s,int k)
{
	int cnt=0;
	for(int i=0;i<s.size();i++)
		if(s[i]=='1')
			++cnt;
	return cnt==k;
}
void testcase()
{
	int n, k;
	cin>>n>>k;
	for(auto s:v[n])
	{
		if(check(s,k))
			cout<<s<<'\n';
	}
}
int main()
{
	sinh();
	int t;
	cin>>t;
	while(t--)
	{
		testcase();
	}
}