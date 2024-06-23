#include <bits/stdc++.h>
using namespace std;
vector <int> v(100);
int n, k;
int res=1e9;
void Try(int start, int sum,int cnt)
{
	if(sum>k||cnt>=res)
		return;
	if(sum==k)
	{
		res=min(res,cnt);
		return;
	}
	else
		for(int i=start;i<n;i++)
			Try(i+1,sum+v[i],cnt+1);
}
void testcase()
{
	res=1e9;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>v[i];
	Try(0,0,0);
	if(res==1e9)
		cout<<"-1\n";
	else
		cout<<res<<'\n';
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