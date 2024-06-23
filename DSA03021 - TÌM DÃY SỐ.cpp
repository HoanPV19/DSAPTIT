#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
int main()
{
	int n;
	cin>>n;
	int a[n];
	ll sum=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,greater<int>());
	int k=a[n-1]; 
	int i=0;
	while(1)
	{
		bool ok=true;
		for(int i=0;i<n;i++)
		{
			int e=a[i]/k;
			if(a[i]/e!=k)
			{
				ok=false;
				--k;
				break;
			}
		}
		if(ok)
			break;
	}
	for(int i=0;i<n;i++)
	{
		sum+=a[i]/(k+1)+1;
	}
	cout<<sum;
}