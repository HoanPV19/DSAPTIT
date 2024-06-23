#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <numeric>
#include <unordered_set>
using namespace std;
#define ll long long
ll fibo[94];
void tinh()
{
	fibo[1]=fibo[2]=1;
	for(int i=3;i<=92;i++)
		fibo[i]=fibo[i-1]+fibo[i-2];
}
void solve(ll n, ll k)
{
	if(n==1)
		cout<<"0\n";
	else if(n==2)
		cout<<"1\n";
	if(n<3)
		return;
	if(k<=fibo[n-2])
		solve(n-2,k);
	else
		solve(n-1,k-fibo[n-2]);
}
int main() {
	int t;
	tinh();
	cin >> t;
	while (t--) {
		ll n, k;
		cin>>n>>k;
		solve(n,k);
	}
	return 0;
}