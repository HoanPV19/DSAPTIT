#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
vector <int> v;
map <char,bool> mp;
string s="";
void ql(int len)
{
	if(len>5)
		return;
		for(int i=0;i<=5;i++)
		{
			if(i==0&&len==0)
				continue;
			char tmp=i+'0';
			if(!mp[tmp])
			{
				s+=tmp;
				mp[tmp]=true;
				v.push_back(stoi(s));
				ql(len+1);
				mp[tmp]=false;
				s=s.substr(0, s.length() - 1);
			}
		}
}
void testcase()
{
	int l,r;
	cin>>l>>r;
	int cnt=0;
	for(int x:v)
		if(x>=l&&x<=r)
			++cnt;
	cout<<cnt<<'\n';
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	ql(0);
	while(t--)
	{
		testcase();
	}
}