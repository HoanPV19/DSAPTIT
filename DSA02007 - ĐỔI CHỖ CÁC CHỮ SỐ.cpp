#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX=1000;
int a[MAX][MAX];
bool visited[MAX][MAX];
int k;
string res;
void ql(string s,int start)
{
	if(start>s.size())
		return;
	char c=s[start];
	int idx=start;
	for(int i=start+1;i<s.size();i++)
	{
		if(s[i]>=c)
		{
			c=s[i];
			idx=i;
		}
	}
	string tmp=s;
	swap(tmp[start],tmp[idx]);
	if(tmp==s)
		ql(s,start+1);
	else 
		res=tmp;
}
void testcase()
{
	cin>>k;
	string s;
	cin>>s;
	res=s;
	if(k==0)
	{
		cout<<s<<'\n';
		return;
	}
	for(int i=0;i<k;i++)
	{
		ql(res,i);
	}
	cout<<res<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		testcase();
	}
	return 0;
}