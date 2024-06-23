#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node 
{
	int val;
	node *left, *right;
	node (int x)
	{
		val=x;
		left=right=NULL;
	}
};
unordered_map<int,node*> mp;
int d=0, ok=1;
void insert( int u, int v,char c)
{
	if(c=='L')
	{
		mp[u]->left=new node(v);
		mp[v]=mp[u]->left;
	}
	else
	{
		mp[u]->right=new node(v);
		mp[v]=mp[u]->right;
	}
}
void muc(node * root, int depth)
{
	if(!ok)
		return;
	if(root==NULL)
	{
		if(d==0)
			d=depth;
		if(d!=depth)
		{
			ok=0;
			return;
		}
		return;
	}
	else if((root->right!=NULL&&root->left==NULL)||(root->right==NULL&&root->left!=NULL))
	{
		ok=0;
		return;
	}
	muc(root->right,depth+1);
	muc(root->left,depth+1);
}
void testcase()
{
	mp.clear();
	d=0;
	ok=1;
	int n;
	cin>>n;
	int u,v;
	char c;
	node *root=NULL;
	while(n--)
	{
		cin>>u>>v>>c;
		if(root==NULL)
		{
			root=new node(u);
			mp[u]=root;
		}
		insert(u,v,c);
	}
	muc(root,0);
	if(ok)
		cout<<"Yes\n";
	else
		cout<<"No\n";
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		testcase();
	}
}