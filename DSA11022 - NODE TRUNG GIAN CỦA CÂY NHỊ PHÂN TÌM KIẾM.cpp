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
void postorder(node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->val<<' ';
	}
}
node* insert(node *root,int x)
{
	if(root==NULL)
		return new node(x);
	if(x<root->val)
		root->left= insert(root->left,x);
	else
		root->right= insert(root->right,x);
	return root;
}
int res=0;
void timcanh(node *root)
{
	if(root==NULL)
		return;
	if(root->left!=NULL||root->right!=NULL)
		++res;
	timcanh(root->left);
	timcanh(root->right);
}
void testcase()
{
	res=0;
	int n,x;
	cin>>n;
	node* root=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		root=insert(root,x);
	}
	//cout<<root->val<<'\n';
	timcanh(root);
	cout<<res;
	cout<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}