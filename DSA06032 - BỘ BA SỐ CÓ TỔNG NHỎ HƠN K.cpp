#include <bits/stdc++.h>
#define ll long long
using namespace std;
void testcase()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ll cap=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(a[i]+a[j]>=k)
				break;
			auto idx=lower_bound(a+j+1,a+n,k-a[i]-a[j]);
			cap+=idx-a-j-1;
		}
	}
	cout<<cap<<'\n';
}
int main(){
	int t=1;
	cin>>t;
	while(t--){
		testcase();
	}
}