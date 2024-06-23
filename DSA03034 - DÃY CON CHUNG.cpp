#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int a[1005];
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		bool check=false;
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		map <int, int> m1,m2,m3;
		int x;
		for(int i=0;i<n1;i++)
		{
			cin>>x;
			++m1[x];
		}
		for(int i=0;i<n2;i++)
		{
			cin>>x;
			++m2[x];
		}
		for(int i=0;i<n3;i++)
		{
			cin>>x;
			++m3[x];
		}
		for(auto y:m1)
		{
			if(m2[y.first]>0&&m3[y.first]>0)
			{
				check=true;
				for(int i=0;i<min({m2[y.first],m1[y.first],m3[y.first]});i++)
					cout<<y.first<<" ";
			}
		}
		if(!check)
			cout<<"NO\n";
		else
			cout<<"\n";
	}
}