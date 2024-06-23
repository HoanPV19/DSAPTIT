#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> tmp;
vector <vector<int>> kq;
ll sum;
void Try(vector <int> &v,ll s,int i)
{
	if(s>sum)
		return;
	if(s==sum)
	{
		kq.push_back(tmp);
		return;
	}
	for(int j=i;j<v.size();j++)
	{
		tmp.push_back(v[j]);
		Try(v,s+v[j],j);
		tmp.pop_back();
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
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>sum;
		vector <int> v;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		Try(v,0,0);
		sort(kq.begin(),kq.end());
		if(!kq.empty())
		{
			cout<<kq.size()<<' ';
			for(int i=0;i<kq.size();i++)
			{
				cout<<"{";
				for(int j=0;j<kq[i].size();j++)
				{
					cout<<kq[i][j];
					if(j<kq[i].size()-1)
						cout<<" ";
				}
				cout<<"} ";
			}
		}
		else
			cout<<"-1";
		cout<<"\n";
		kq.clear();
		tmp.clear();
	}
}