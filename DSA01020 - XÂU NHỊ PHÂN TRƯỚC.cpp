#include <bits/stdc++.h>
using namespace std;
void tru(string s)
{
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
			s[i]='0';
			for(int j=i+1;j<s.size();j++)
				s[j]='1';
			break;
		}
	}
	cout<<s<<'\n';
}
void testcase()
{
	string s;
	cin>>s;
	if(s==string(s.size(),'0'))
		cout<<string(s.size(),'1')<<'\n';
	else
	{
		tru(s);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		testcase();
	}
}