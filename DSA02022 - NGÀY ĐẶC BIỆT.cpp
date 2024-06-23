#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
bool check(string s)
{
	string n=s.substr(0,2);
	string t=s.substr(2,2);
	string y=s.substr(4,4);
	if(stoi(t)>12||stoi(n)==0||stoi(t)==0||stoi(y)<2000)
		return false;
	return true;
}
set <string> res;
void ql(string s)
{
	if(s.size()==8)
	{
		if(check(s))
			res.insert(s);
		return;
	}
	ql(s+"0");
	ql(s+"2");
}
void testcase()
{
	ql("");
	for(auto x: res)
	{
		cout<<x[0]<<x[1]<<"/"<<x[2]<<x[3]<<"/"<<x[4]<<x[5]<<x[6]<<x[7]<<'\n';
	}
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