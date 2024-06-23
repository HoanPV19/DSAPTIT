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
node *build(node *root,int x)
{
	if(root==NULL)
	{
		root= new node(x);
	}
	else
	{
		if(x<root->val)
			root->left= build(root->left,x);
		else
			root->right= build(root->right,x);
	}
	return root;
}
void postorder(node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->val<<' ';
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
	}
	for(int i=0;i<n;i++)
	{
		root=build(root,a[i]);
	}
	postorder(root);
	cout<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}