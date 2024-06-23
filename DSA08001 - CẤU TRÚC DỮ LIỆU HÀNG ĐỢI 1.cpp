#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		queue <int> q;
		int n;
		cin>>n;
		while(n--)
		{
			int k;
			cin>>k;
			switch(k)
			{
				case 1:
					cout<<q.size()<<'\n';
					break;
				case 2:
					if(q.empty())
						cout<<"YES\n";
					else
						cout<<"NO\n";
					break;
				case 3:
					int a;
					cin>>a;
					q.push(a);
					break;
				case 4:
					if(!q.empty())
						q.pop();
					break;
				case 6:
					if(q.empty())
						cout<<"-1\n";
					else
						cout<<q.back()<<'\n';
					break;
				case 5:
					if(q.empty())
						cout<<"-1\n";
					else
						cout<<q.front()<<'\n';
					break;
			}
		}
	}
}