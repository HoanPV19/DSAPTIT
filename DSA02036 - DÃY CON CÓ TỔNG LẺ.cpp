#include <bits/stdc++.h>
using namespace std;
vector <int> a;
vector <int> v;
set <vector<int>> se;
void Try(int start, int sum)
{
	if(sum%2==1)
		se.insert(v);
	for(int i=start;i<a.size();i++)
	{
		v.push_back(a[i]);
		Try(i+1,sum+a[i]);
		v.pop_back();
	}
}
void testcase()
{
	int n,x;
	a.clear();
	v.clear();
	se.clear();
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end(),greater<int>());
	Try(0,0);
	for(auto x:se)
	{
		for(auto y:x)
			cout<<y<<' ';
		cout<<'\n';
	}
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