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
// bool bs(int l, int r, int a[],int x)
// {
// 	while(l<=r)
// 	{
// 		if(a[mid]==x)
// 			return false;
// 		else if(a[mid]<x)
// 			l=mid+1;
// 		else
// 			r=mid-1;
// 	}
// 	return true;
int test()
{
	int n;
	cin>>n;
	int a[n+1],b[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
		cin>>b[i];
	for(int i=1;i<n;i++)
	{
		if(a[i]!=b[i])
			return i;
	}
	return n;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cout<<test()<<'\n';
	}
	return 0;
}