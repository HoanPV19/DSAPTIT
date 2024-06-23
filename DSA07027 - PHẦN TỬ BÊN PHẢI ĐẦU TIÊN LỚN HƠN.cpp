#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin>>t;
  while(t--)
  { 
	int n;
	cin>>n;
	int x;
	stack <int> st;
	vector <int> v(n),V(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		while(!st.empty()&&st.top()<=v[i])
			st.pop();
		if(st.empty())
		{
			st.push(v[i]);
			V[i]=-1;
			continue;
		}
		V[i]=st.top();
		st.push(v[i]);
	}
	reverse(V.begin(),V.end());
	for(int y:V)
		cout<<y<<" ";
	cout<<'\n';
}
}