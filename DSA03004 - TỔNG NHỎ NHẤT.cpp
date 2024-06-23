#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	int t;
	cin>>t;
	int x=0;
	while(t--)
	{
		int n;
		cin>>n;
		vector <int> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x!=0)
				v.push_back(x);
		}
		sort(v.begin(), v.end());
		ll sum=0;
		int len=v.size()/2;
		if(v.size()%2==0)
		{
			for(int i=0;i<v.size();i+=2)
			{
				sum+=(v[i]+v[i+1])*pow(10,len-1);
				--len;
			}
		}
		else
		{
			sum=v[0]*pow(10,len);
			for(int i=1;i<v.size();i+=2)
			{
				sum+=(v[i]+v[i+1])*pow(10,len-1);
				--len;
			}
		}
		cout<<sum<<'\n';
	}
}