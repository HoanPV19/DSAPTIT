#include <bits/stdc++.h>
using namespace std;
vector <int> a;
vector <int> v;
set <vector<int>> se;
bool nt(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return n>1;
}
int k;
void Try(int start, int sum)
{
	if(sum==k)
		se.insert(v);
	for(int i=start;i<a.size();i++)
	{
		v.push_back(a[i]);
		Try(i+1,sum+1);
		v.pop_back();
	}
}
void testcase()
{
	int n,x;
	a.clear();
	v.clear();
	se.clear();
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
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