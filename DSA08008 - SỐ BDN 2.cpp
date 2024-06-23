#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
bool check(string s, int n)
{
	int x=0;
	for(int i=0;i<s.size();i++)
		x=(x*10+s[i]-'0')%n;
	return x==0;
}
int main()
{
	    ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		queue <string> q;
		cin>>n;
		q.push("1");
		string s;
		while(1)
		{
			s=q.front();
			if(check(s,n))
			{
				cout<<s<<'\n';
				break;
			}
			q.pop();
			q.push(s+"0");
			q.push(s+"1");
		}
	}
}