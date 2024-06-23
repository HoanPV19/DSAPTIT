#include <bits/stdc++.h>
using namespace std;
bool mark[100];
vector <int> v(100);
int k,n;
int cnt=0;
int SUM=0;
int ok=0;
void Try(int start, int sum)
{
	if(ok)
		return;
	if(sum==SUM)
	{
		++cnt;
		ok=1;
		return;
	}
	for(int i=start;i<n;i++)
	{
		if(!mark[i]&&sum+v[i]<=SUM)
		{
			mark[i]=true;
			Try(i+1,sum+v[i]);
			mark[i]=false;
		}
	}
}
void testcase()
{
	memset(mark,false,sizeof mark);
	cnt=0;
	ok=0;
	cin>>n>>k;
	int x, sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=v[i];
	}
	if(sum%k!=0||k>n)
	{
		cout<<"0\n";
		return;
	}
	SUM=sum/k;
	for(int i=0;i<k;i++)
	{
		ok=0;
		Try(0,0);
	}
	if(cnt==k)
		cout<<"1\n";
	else
		cout<<"0\n";
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