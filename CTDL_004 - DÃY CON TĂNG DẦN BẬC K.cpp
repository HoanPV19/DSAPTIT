#include <bits/stdc++.h>
using namespace std;
int a[105], res=0;
void sinh(int n, int k, int cnt, int start, int before)
{
	if(cnt==k)
	{
		++res;
		return;
	}
	for(int i=start;i<n;i++)
	{
		if(a[i]>before)
		sinh(n,k,cnt+1,i+1,a[i]);
	}
}
void testcase()
{
	int n, k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sinh(n,k,0,0,-1);
	cout<<res<<'\n';
}
int main()
{
	int t=1;
	//cin>>t;
	while(t--)
		testcase();
}