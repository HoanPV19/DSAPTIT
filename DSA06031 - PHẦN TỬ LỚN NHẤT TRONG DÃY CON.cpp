#include <bits/stdc++.h>
#define ll long long
using namespace std;
void testcase()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	multiset<int> se;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		se.insert(a[i]);
		if(i>=k-1)
		{
			cout<<*se.rbegin()<<" ";
			se.erase(se.find(a[i-k+1]));
		}
	}
	cout<<'\n';
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		testcase();
	}
}