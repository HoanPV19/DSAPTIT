#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool a[1000005];
void sang()
{
	for(int i=0;i<=1000005;i++)
		a[i]=true;
	a[0]=a[1]=false;
	for(ll i=2;i<=1000005;i++)
	{
		if(a[i])
		for(ll j=i*i;j<=1000005;j+=i)
			a[j]=false;
	}
}
void test()
{
	int n;
	cin>>n;
	if(a[n-2])
	{
		cout<<"2 "<<n-2<<'\n';
		return;
	}
	for(int i=3;i<=n/2+1;i+=2)
		if(a[i]&&a[n-i])
		{
			cout<<i<<" "<<n-i<<'\n';
			return;
		}
	cout<<"-1\n";
}
int main()
{
	int t;
	cin>>t;
	sang();
	while(t--)
	{
		test();
	}
}