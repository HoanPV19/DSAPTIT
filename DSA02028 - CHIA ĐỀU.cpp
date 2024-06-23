#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, k ,res=0, sum=0;
void Try(int tong, int cnt, vector <int> &v, int start)
{
	if(cnt==k&&start==n)
	{
		++res;
		return;
	}
	for(int i=start;i<n;i++)
	{
		tong+=v[i];
		if(tong==sum)
			Try(0,cnt+1,v,i+1);
	}
}
void testcase()
{
	cin>>n>>k;
	vector<int> v(10000);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=v[i];
	}
	if(sum%k)
	{
		cout<<"0\n";
		return;
	}
	sum/=k;
	Try(0,0,v,0);
	cout<<res<<'\n';
}
int main()
{
	int t=1;
	//cin>>t;
	while(t--)
	{
		testcase();
	}
}