#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, s, m;
int solve()
{
	if(m>n)
		return -1;
	if(s>=7&&6*n<7*m)
		return -1;
	return (s*m-1)/n+1;
}
int main() {
   int t;
   cin>>t;
   while(t--)
   {
   		cin>>n>>s>>m;
   		cout<<solve()<<'\n';
   }
}