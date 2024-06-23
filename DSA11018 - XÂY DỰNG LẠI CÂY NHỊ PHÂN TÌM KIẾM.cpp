#include <bits/stdc++.h>
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
void insert(node *root,int x)
{
	if(x<root->val)
	{
		if(root->left==NULL)
			root->left=new node(x);
		else
			insert(root->left,x);	
	}
	else
	{
		if(root->right==NULL)
			root->right=new node(x);
		else
			insert(root->right,x);	
	}
	return;
}
void preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<root->val<<' ';
		preorder(root->left);
		preorder(root->right);
	}
}
void testcase()
{
	int n;
	cin>>n;
	int a[n];
	node* root=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(root==NULL)
			root=new node(a[i]);
		else
			insert(root,a[i]);
	}
	preorder(root);
	cout<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}