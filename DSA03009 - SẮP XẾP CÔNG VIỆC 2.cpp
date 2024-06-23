#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
bool cmp(pair<int,int> a, pair<int,int> b)
{
	return a.first<b.first;
}
void testcase()
{
	int n;
	cin>>n;
	int m,d,p;
	vector<pair<int,int>> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i].first>>a[i].first>>a[i].second;
	}
	sort(a.begin(),a.end(),cmp);
	int sum=0;
	multiset<int> se;
		for(int i=0;i<n;i++)
		{
			if(se.size()<a[i].first)
			{
				se.insert(a[i].second);
				sum+=a[i].second;
			}
			else if(se.size()==a[i].first)
			{
				if(a[i].second>*se.begin())
				{
					sum-=*se.begin();
					se.erase(se.begin());
					se.insert(a[i].second);
					sum+=a[i].second;
				}
			}
		}
	cout<<se.size()<<' '<<sum<<'\n';
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
		testcase();
}