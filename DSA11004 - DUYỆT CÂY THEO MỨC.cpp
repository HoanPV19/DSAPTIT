#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
struct node
{
	int val;
	node *left, *right;
	node(int x)
	{
		val=x;
		left=right=NULL;
	}
};
void makenode(node *r, int x,char c)
{
	if(c=='L')
		r->left= new node(x);
	else
		r->right= new node(x);
}
void insert(node *r, int u, int x, int c)
{
	if(r==NULL)
	{
		return;
	}
	if(r->val==u)
	{
		makenode(r,x,c);
	}
	else
	{
		insert(r->left,u,x,c);
		insert(r->right,u,x,c);
	}
}
map <int,bool> mp;
vector<pair<int,int>> v;
void inoder(node *r,int depth)
{
	if(r!=NULL)
	{
		if(!mp[r->val])
		{
			mp[r->val]=true;
			v.push_back({r->val,depth});
		}
		inoder(r->left,depth+1);
		inoder(r->right,depth+1);
	}
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
	return a.second<b.second;
}
void testcase()
{
	v.clear();
	mp.clear();
	int n, u,x;
	char c;
	cin>>n;
	node *r=NULL;
	while(n--)
	{
		cin>>u>>x>>c;
		if(r==NULL)
		{
			r=new node(u);
			makenode(r,x,c);
		}
		else
			insert(r,u,x,c);
	}
	inoder(r,0);
	stable_sort(v.begin(),v.end(),cmp);
	for(auto x:v)
		cout<<x.first<<' ';
	cout<<'\n';
}
int main()
{
	//ios_base::sync_with_stdio(NULL);
	//cin.tie(0);
	//cout.tie(0);
	int t;
	cin>>t;
	while(t--)
		testcase();
	return 0;
}