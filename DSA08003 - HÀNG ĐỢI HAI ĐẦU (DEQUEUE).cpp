#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	deque <int> dq;
	while(t--)
	{
		string s;
		int n;
		cin>>s;
		if(s=="PUSHBACK")
		{
			cin>>n;
			dq.push_back(n);	
		}
		else if(s=="PUSHFRONT")
		{
			cin>>n;
			dq.push_front(n);
		}
		else if(s=="PRINTFRONT")
		{
			if(dq.empty())
				cout<<"NONE\n";
			else
				cout<<dq.front()<<'\n';
		}
		else if(s=="PRINTBACK")
		{
			if(dq.empty())
				cout<<"NONE\n";
			else
				cout<<dq.back()<<'\n';
		}
		else if(s=="POPFRONT")
		{
			if(!dq.empty())
			dq.pop_front();
		}
		else
		{
			if(!dq.empty())
			dq.pop_back();
		}
	}
}