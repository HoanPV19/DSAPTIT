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
int test()
{
	int n,m,x;
		cin>>n>>m>>x;
		int a[n+1], b[m+1];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int j=0;j<m;j++)
			cin>>b[j];
		int i=0, j=0;
		vector <int> kq;
		while(i<n&&j<m)
		{
			if(a[i]<b[j])
				kq.push_back(a[i++]);
			else 
				kq.push_back(b[j++]);
		}
		while(i<n)
			kq.push_back(a[i++]);
		while(j<m)
			kq.push_back(b[j++]);
	return kq[x-1];
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cout<<test()<<'\n';
	}
	return 0;
}