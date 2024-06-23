#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       	int x;
       	priority_queue <int, vector<int>,greater<int>> pq;
       	for(int i=0;i<n;i++)
       	{
       		cin>>x;
       		pq.push(x);
		}
        ll ans=0;
        while(pq.size()>1)
        {
        	x=pq.top();
        	pq.pop();
        	int y=pq.top();
        	ans+=x+y;
        	pq.pop();
        	pq.push(x+y);
		}
		cout<<ans<<'\n';
    }
    return 0;
}