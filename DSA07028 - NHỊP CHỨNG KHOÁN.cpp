#include <iostream>
#include <stack>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
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
		stack<int> st;
		for(int i=0;i<n;i++)
		{
			while(!st.empty()&&a[i]>=a[st.top()])
			{
				v[i]+=v[st.top()];
				st.pop();
			}
			st.push(i);
		}
    	for(int i=0;i<n;i++)
    	{
    		cout<<v[i]<<" ";
		}
		cout<<'\n';
	}
}