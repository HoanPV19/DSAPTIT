#include <bits/stdc++.h>
using namespace std;
vector <int> a;
vector <int> v;
vector<string> se;
int k,n;
int cnt=0;
void Try(int end,int sum,string s)
{
	if(sum==n)
	{
		s.pop_back();
		s="("+s+")";
		se.push_back(s);
	}
	else if(sum<n)
	{
		for(int i=end;i>=1;i--)
		{
			Try(i,sum+i,s+to_string(i)+" ");
		}
	}
}
void testcase()
{
	cnt=0;
	a.clear();
	v.clear();
	se.clear();
	cin>>n;
	Try(n,0,"");
	cout<<se.size()<<'\n';
	for(auto x:se)
	{
		cout<<x<<' ';
	}
	cout<<'\n';
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