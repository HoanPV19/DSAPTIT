#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> tmp;
vector <vector<int>> kq;
void Try(int i, vector <int> &v)
{
	if(tmp.size()>1)
		kq.push_back(tmp);
	for(int j=i;j<v.size();j++)
	{
		if(tmp.empty())
		{
			tmp.push_back(v[j]);
			Try(j+1,v);
			tmp.pop_back();
		}
		else if(v[j]>tmp[tmp.size()-1])
		{
			tmp.push_back(v[j]);
			Try(j+1,v);
			tmp.pop_back();
		}
	}
}
bool cmp(vector <int> a, vector<int> b)
{
	string x="",y="";
	for(auto k:a)
	{
		x+=to_string(k)+" ";
	}
	for(auto k:b)
	{
		y+=to_string(k)+" ";
	}
	return x<y;
}
int main()
{
	int t;
	t=1;
	while(t--)
	{
		int n,x;
		cin>>n;
		vector <int> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		Try(0,v);
		sort(kq.begin(),kq.end(),cmp);
		for(auto k:kq)
		{
			for(auto x:k)
				cout<<x<<" ";
			cout<<"\n";
		}
	}
}