#include <bits/stdc++.h>
using namespace std;
int a[20][20];
vector<vector<int>> res;
void tong(int n,int k,vector <int> &v)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i][v[i]];
		if(sum>k)
			return;
	}
	if(sum==k)
	{
		res.push_back(v);
	}
}
void testcase()
{
	int n,k;
	cin>>n>>k;
	vector <int> v(n);
	for(int i=0;i<n;i++)
	{
		v[i]=i;
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	tong(n,k,v);
	while(next_permutation(v.begin(),v.end()))
	{
		tong(n,k,v);
	}
	cout<<res.size()<<"\n";
	for(auto x:res)
	{
		for(auto y:x)
			cout<<y+1<<" ";
		cout<<'\n';
	}
}
int main()
{
	int t=1;
	//cin>>t;
	while(t--)
		testcase();
}