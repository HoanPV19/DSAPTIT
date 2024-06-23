#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
bool solve(string s)
{
	stack <char> st;
	for(char c:s)
	{
		if(c==')')
		{
			char top=st.top();
			st.pop();
			bool check=true;
			while(!st.empty()&&top!='(')
			{
				check=false;
				top=st.top();
				st.pop();
			}
			if(check)
				return true;
		}
		else if(!isalpha(c)&&c!=' ')
			st.push(c);
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	string s;
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,s);
		if(solve(s))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}