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
ll a[105];
void solve()
{
	int n;
	cin>>n;
	ll ans=-1e9;
	ll sum=-1e9;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(sum<0)
			sum=a[i];
		else 
			sum+=a[i];
		ans=max(ans,sum);
	}
	cout<<ans<<'\n';
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}