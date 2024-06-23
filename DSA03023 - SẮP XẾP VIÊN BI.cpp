#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
	int n;
		string s,b;
int find(int i, char c)
{
	int pos=-1;
	for(int j=n-1;j>i;j--)
	{
		if(s[j]==c)
		{
			if(pos==-1) pos=j;
			if(s[i]==b[j]) return j;
		}
	}
	return pos;
}
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='X')
			s[i]='0';
		else if(s[i]=='T')
			s[i]='1';
		else
			s[i]='2';
	}
	b=s;
	sort(b.begin(),b.end());
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(b[i]==s[i])
			continue;
		swap(s[i],s[find(i,b[i])]);
		++count;
	}
	cout<<count;
}