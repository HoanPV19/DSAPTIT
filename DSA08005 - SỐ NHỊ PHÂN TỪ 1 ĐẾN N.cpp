#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		queue <string> s;
		s.push("1");
		while(n--)
		{
			string tmp=s.front();
			s.pop();
			cout<<tmp<<" ";
			s.push(tmp+"0");
			s.push(tmp+"1");
		}
		cout<<'\n';
	}
}