#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin>>t;
  while(t--)
  { 
    string s;
    cin>>s;
    vector <char> v;
    stack <char> st;
    int ans=0;
    int open=0;
    for(char c:s)
    {
        if(c==')')
        {
        	if(open)
        		--open;
        	else
        		v.push_back(c);
		}
		else
			++open;
    }
    while(open)
    {
    	--open;
    	v.push_back('(');
	}
	for(char c:v)
    {
        if(st.empty())
        { 
          st.push(c);
          continue;
        }
      if(c==')')
    {
          if(st.top()==c)
           ++ans;
        st.pop();
      }
      else 
      {
          if(st.top()==c)
            ++ans;
           else ans+=2;
           st.pop();
      }
}
cout<<ans<<'\n';
}
}