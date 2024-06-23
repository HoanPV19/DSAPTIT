#include <bits/stdc++.h>
using namespace std;
void sinh(int start,int n, int k, string s)
{
	if(s.size()==k)
	{
		cout<<s<<'\n';
		return;
	}
	for(int i=start;i<n;i++)
	{
		char c='A'+i;
		sinh(i+1,n,k,s+c);
	}
}
void testcase()
{
	int n, k;
	cin>>n>>k;
	sinh(0,n,k,"");
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}