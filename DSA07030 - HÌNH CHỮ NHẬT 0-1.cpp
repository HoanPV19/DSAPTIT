#include <bits/stdc++.h>
#define ll long long
using namespace std;
int res=0;
void calc(vector <int> &v)
{
	int n=v.size();
	//tim phan tu dau tien be hon no ben phai va trai
	stack <int> st,stt;
	st.push(n-1);
	vector <int> right(n,0),left(n,0);
	for(int i=n-2;i>=1;i--)
	{
		while(v[i]<=v[st.top()])
			st.pop();
		right[i]=st.top();
		st.push(i);
	}
	stt.push(0);
	for(int i=1;i<=n-2;i++)
	{
		while(v[i]<=v[stt.top()])
			stt.pop();
		left[i]=stt.top();
		stt.push(i);
	}
	for(int i=0;i<n-1;i++)
	{
		res=max(res,(right[i]-left[i]-1)*v[i]);
	}
}
void testcase()
{
	res=0;
	int n,m;
	cin>>n>>m;
	int a[n+2][m+2];
	vector<int> v(m+2,0);
	v[m+1]=-1;
	v[0]=-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j])
				++v[j];
			else
				v[j]=0;
		}
		calc(v);
	}
	cout<<res<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		testcase();
	}
}