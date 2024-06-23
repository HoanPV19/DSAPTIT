#include <bits/stdc++.h>
using namespace std;
int main ()
{
	vector<int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t; cin >> t;
	while (t--)
	{
		int x; cin >> x;
		int cnt=0;
		for (int i=a.size()-1; i>=0; i--)
		{
			while (x>=a[i])
			{
				x-=a[i];
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}