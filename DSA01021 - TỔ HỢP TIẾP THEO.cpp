#include <bits/stdc++.h>
using namespace std;
int a[100], b[100];
void sinh(int n,int k)
{
	int i=k;
	while(i!=0&&b[i]==n-k+i)
		--i;
	if(i!=0)
	{
		++b[i];
		for(int j=i+1;j<=k;j++)
			b[j]=b[j-1]+1;
	}	
}
void testcase()
{
	int n, k;
	cin>>n>>k;map<int,bool> mp;
	for(int i=1;i<=k;i++)
	{
		cin>>a[i];
		b[i]=a[i];
		mp[a[i]]=true;
	}
	sinh(n,k);
	int cnt=0;
	for(int i=1;i<=k;i++)
	{
		if(!mp[b[i]])
			++cnt;
	}
	if(!cnt)
		cnt=k;
	cout<<cnt<<'\n';
}
int main(){
	int t;
	cin>>t;
	while(t--){
		testcase();
	}
}