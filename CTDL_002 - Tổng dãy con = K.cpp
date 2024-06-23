#include <bits/stdc++.h>
using namespace std;
int a[100];
int n,m,cnt=0;
vector <int> v;
void ql(int k, int sum)
{
	if(k>n)
		return;
	if(sum==m)
	{
		++cnt;
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<'\n';
		return;
	}
	else if(sum>m)
		return;
		ql(k+1,sum);
		v.push_back(a[k]);
		ql(k+1,sum+a[k]);
		v.pop_back();
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	ql(0,0);
	cout<<cnt;
}