#include <bits/stdc++.h>
#define ll long long
using namespace std;
void testcase()
{
	int n;
	cin>>n;
	int a[n];
	map <int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(mp[a[i]]>1)
		{
			cout<<a[i]<<'\n';
			return;
		}
	}
	cout<<"NO\n";
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		testcase();
	}
}