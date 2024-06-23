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
void solve(ll n, ll k)
{
	int mid=(int)pow(2,n-1);
	char c='A'+n-1;
	if(k==mid)
	{
		cout<<c<<'\n';
		return;
	}
	else if(k<mid)
		solve(n-1,k);
	else
		solve(n-1,k-mid);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin>>n>>k;
		solve(n,k);
	}
	return 0;
}