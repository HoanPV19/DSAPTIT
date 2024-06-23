#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin>>t;
  cin.ignore();
  while(t--)
  {
  	string s;
  	getline(cin,s);
  	stringstream ss(s);
  	string tmp;
  	vector <string> v;
  	while(ss>>tmp)
  	  	v.push_back(tmp);
  	reverse(v.begin(),v.end());
  	for(string k:v)
  	{
  		cout<<k<<" ";
	  }
	  cout<<'\n';
  }
}