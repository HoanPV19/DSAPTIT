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
int low(int l,int r, int x, vector<ll> &v)
{
	if(x<v[l])
		return -1;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(v[mid]==x)
			return mid+1;
		else if(v[mid]<x)
			l=mid+1;
		else	
			r=mid-1;
	}
	return l;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector <ll> a;
		ll n, x,y;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			cin>>y;
			a.push_back(y);
		}
		cout<<low(0,n-1,x,a)<<'\n';
	}
	return 0;
}