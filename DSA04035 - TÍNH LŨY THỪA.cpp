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
const int MOD=1e9+7;
#define ll long long
ll bpow(ll a, ll b)
{
	if(b==0)
		return 1;
	ll k=bpow(a,b/2);
	k=(k*k)%MOD;
	if(b%2)
		return (a*k)%MOD;
	return k;
}
int main() {
	ll a,b;
	while (cin>>a) {
		cin>>b;
		if(a==0&&b==0)
			break;
		cout<<bpow(a,b)<<'\n';
	}
	return 0;
}