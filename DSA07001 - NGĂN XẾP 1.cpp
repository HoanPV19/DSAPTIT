#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	string s;
	int n;
	vector <int> st;
	while(cin>>s)
	{
		if(s=="push")
		{
			cin>>n;
			st.push_back(n);
		}
		else if(s=="show")
		{
			if(st.empty())
				cout<<"empty\n";
			else
				for(auto x:st)
					cout<<x<<" ";
				cout<<'\n';
		}
		else
		{
			st.pop_back();
		}
	}
}