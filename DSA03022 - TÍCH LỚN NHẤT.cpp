#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   int n;
   cin>>n;
   vector <int> duong;
   vector <int> am;
   int x;
   for(int i=0;i<n;i++)
   {
   		cin>>x;
   		if(x<0)
   		 	am.push_back(x);
   		else
   			duong.push_back(x);
   }
   sort(am.begin(),am.end());
   sort(duong.begin(),duong.end(), greater<int>());
   vector <int> v;
   if(am.size()>1)
{
	v.push_back(am[0]*am[1]);
	if(!duong.empty())
		v.push_back(am[0]*am[1]*duong[0]);
}
	if(duong.size()>1)
	{
		v.push_back(duong[0]*duong[1]);
		if(duong.size()>2)
		v.push_back(duong[0]*duong[1]*duong[2]);
	}
	sort(v.begin(),v.end(), greater<int>());
	cout<<v[0]<<'\n';
}