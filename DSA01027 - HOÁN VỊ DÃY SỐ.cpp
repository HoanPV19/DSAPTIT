#include <bits/stdc++.h>
using namespace std;
vector<int> v;
bool mark[2000];
void sinh(int start,int n, string s,int cnt)
{
	if(cnt==n)
	{
		cout<<s<<'\n';
		return;
	}
	for(int i=start;i<n;i++)
	{
		if(!mark[i])
		{
			mark[i]=true;
			sinh(0,n,s+to_string(v[i])+" ",cnt+1);
			mark[i]=false;
		}
	}
}
void testcase()
{
	int n,x;
	cin>>n;
	memset(mark,false,sizeof mark);
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	sinh(0,n,"",0);
}
int main()
{
	int t=1;
//	cin>>t;
	while(t--)
		testcase();
}