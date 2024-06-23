#include <bits/stdc++.h>
using namespace std;
vector<string> v[17];
void sinh()
{
	queue<string> q;
	q.push("A");
	q.push("B");
	while(q.front().size()<=17)
	{
		string s=q.front();
		q.pop();
		v[s.size()].push_back(s);
		q.push(s+"A");
		q.push(s+"B");
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
	cin>>n;
	for(auto s:v[n])
	{
		cout<<s<<' ';
	}
	cout<<'\n';
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