#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
bool cmp(pair<int,int> a, pair<int,int> b)
{
	if(a.second==b.second)
		return a.first<b.first;
	return a.second>b.second;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count=0;
		int open=0, close=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='[')
				++open;
			else
			{
				if(open>0)
				--open;
				else 
				{
					int j=i;
					while(s[j]==']') ++j;
					swap(s[i],s[j]);
					count+=j-i;
					++open;
				}
			}
		}
		cout<<count<<'\n';
	}
}