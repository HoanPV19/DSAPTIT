#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll f[93];
char loai(char c)
{
	if(c=='}')
		return '{';
	if(c==')')
		return '(';
	if(c==']')
		return '[';
}
void testcase()
{
	string s;
	cin>>s;
	stack<char> st;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='{'||s[i]=='('||s[i]=='[')
			st.push(s[i]);
		else
		{
			if(st.empty()||st.top()!=loai(s[i]))
			{
				cout<<"NO\n";
				return;
			}
			st.pop();
		}
	}
	if(!st.empty())
	{
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
		testcase();
}