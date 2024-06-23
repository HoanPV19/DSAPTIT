#include <bits/stdc++.h>
using namespace std;
int a[100], b[100];
void testcase()
{
	int n;
	cin>>n;
	vector<int>a (n), b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	int cnt=1;
	sort(b.begin(),b.end());
	if(a==b)
	{
		cout<<cnt<<'\n';
		return;
	}
	while(next_permutation(b.begin(),b.end()))
	{
		++cnt;
		if(a==b)
	{
		cout<<cnt<<'\n';
		return;
	}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		testcase();
	}
}