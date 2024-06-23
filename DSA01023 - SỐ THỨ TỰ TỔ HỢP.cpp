#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int cnt=0;
void sinh(int start,int n,int k,vector<int> &a)
{
	if(v.size()==k)
	{
		++cnt;
		if(a==v)
		{
			cout<<cnt<<'\n';
			return;
		}
		return;
	}
	for(int i=start;i<=n;i++)
	{
		v.push_back(i);
		sinh(i+1,n,k,a);
		v.pop_back();
	}
}
void testcase()
{
	v.clear();
	cnt=0;
	int n, k;
	cin>>n>>k;
	vector <int> a(k);
	for(int i=0;i<k;i++)
		cin>>a[i];
	sinh(1,n,k,a);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		testcase();
	}
}