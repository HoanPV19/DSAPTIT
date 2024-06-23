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
		queue <string> q;
		q.push("9");
		while(1)
		{
			string s=q.front();
			if(stoll(s)%n==0)
			{
				cout<<s<<'\n';
				break;
			}
			q.pop();
			q.push(s+"0");
			q.push(s+"9");
		}
	}
}