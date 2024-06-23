#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> v; 
void sinh()
{
	queue<string> q;
	q.push("9");
	while(q.front().size()<=17)
	{
		string s=q.front();
		q.pop();
		v.push_back(stoll(s));
		q.push(s+"0");
		q.push(s+"9");
	}
	sort(v.begin(),v.end());
}
void testcase()
{
	ll n;
	cin>>n;
	for(auto x:v)
	{
		if(x%n==0)
		{
			cout<<x<<'\n';
			return;
		}
	}
}
int main(){
	int t;
	cin>>t;
	sinh();
	while(t--){
		testcase();
	}
}