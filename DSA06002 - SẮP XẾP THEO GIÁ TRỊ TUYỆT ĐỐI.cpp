#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
const int Nmax=1e5;
int k;
bool cmp(int a,int b)
{
	return abs(a-k)<abs(b-k);
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	int a[Nmax];
	while(t--)
	{
		int n;
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
		stable_sort(a,a+n,cmp);
		for(int i=0;i<n;i++)	
			cout<<a[i]<<" ";
		cout<<'\n';
	}
}