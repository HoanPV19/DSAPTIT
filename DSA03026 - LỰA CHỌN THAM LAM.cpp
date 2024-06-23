#include <bits/stdc++.h>
#define ll long long
using namespace std;
string big(int n, int s)
{
	string so=string(n,'0');
	for(int i=0;i<n;i++)
	{
			if(s>=9)
			{
				s-=9;
				so[i]+=9;
			}
			else
			{
				so[i]+=s;
				s-=s;
			}
	}
	return so;
}
string small(string so)
{
	reverse(so.begin(),so.end());
	if(so[0]!='0')
		return so;
	else
	{
		++so[0];
		for(int i=1;i<so.size();i++)
		{
			if(so[i]>'0')
			{
				--so[i];
				return so;
			}
		}
	}
}
void testcase()
{
	int n, s;
	cin>>n>>s;
	if(n==1&&s==0)
	{
		cout<<"0 0\n";
		return;
	}
	if(9*n<s||(n!=1&&s==0))
	{
		cout<<"-1 -1\n";
	}else
	{
		string b=big(n,s);
		string sma=small(b);
		cout<<sma<<" "<<b<<'\n';
	}
}
int main(){
	int t=1;
	//>>t;
	while(t--){
		testcase();
	}
}