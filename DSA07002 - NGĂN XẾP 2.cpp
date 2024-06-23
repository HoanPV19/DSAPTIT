#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	string s;
	int n,t;
	cin>>t;
	vector <int> st;
	while(t--)
	{
		cin>>s;
		if(s=="PUSH")
		{
			cin>>n;
			st.push_back(n);
		}
		else if(s=="PRINT")
		{
			if(st.empty())
				cout<<"NONE\n";
			else cout<<st.back()<<'\n';
		}
		else if(!st.empty())
		{
			st.pop_back();
		}
	}
}