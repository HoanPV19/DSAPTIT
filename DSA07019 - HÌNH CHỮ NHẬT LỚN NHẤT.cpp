#include <iostream>
#include <stack>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n], v[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    		v[i]=1;
		}
    	stack <int> st,sc;
    	for(int i=0;i<n;i++)
    	{
    		while(!st.empty()&&a[st.top()]>a[i])
    		{
    			v[st.top()]+=i-st.top()-1;
    			st.pop();
			}
			st.push(i);
		}
		int i=st.top()+1;
		while(!st.empty())
		{
			v[st.top()]+=i-st.top()-1;
    			st.pop();
		}
		for(int i=n-1;i>=0;i--)
    	{
    		while(!sc.empty()&&a[sc.top()]>a[i])
    		{
    			v[sc.top()]+=sc.top()-i-1;
    			sc.pop();
			}
			sc.push(i);
		}
		if(!sc.empty())
			i=sc.top()-1;
		while(!sc.empty())
		{
			v[sc.top()]+=sc.top()-i-1;
    			sc.pop();
		}
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			ans=max(ans,(ll)a[i]*v[i]);
		}
		cout<<ans<<'\n';
	}
}