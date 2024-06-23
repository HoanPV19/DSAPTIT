#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX=1000;
int n, k;
bool X[MAX], Y[MAX], cot[MAX];
int cnt=0;
void ql(int i)
{
	if(i==n+1)
	{
		++cnt;
		return;
	}
	for(int j=1;j<=n;j++)
	{
		if(!X[i+j-1]&&!Y[n-i+j]&&!cot[j])
		{
			X[i+j-1]=Y[n-i+j]=cot[j]=true;
			ql(i+1);
			X[i+j-1]=Y[n-i+j]=cot[j]=false;
		}
	}
}
void testcase()
{
	cin>>n;
	cnt=0;
	memset(X,false,sizeof X);
	memset(Y,false,sizeof Y);
	memset(cot,false,sizeof cot);
	ql(1);
	cout<<cnt<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		testcase();
	}
	return 0;
}