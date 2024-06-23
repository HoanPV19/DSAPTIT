#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
		queue <int> q;
		int n;
		cin>>n;
		while(n--)
		{
			int n;
			string s;
			cin>>s;
			if(s=="PUSH")
			{
				cin>>n;
				q.push(n);
			}
			else if(s=="POP")
			{
				if(!q.empty())
					q.pop();
			}
			else 
			{
				if(!q.empty())
					cout<<q.front()<<'\n';
				else
					cout<<"NONE\n";
			}	
		}
}