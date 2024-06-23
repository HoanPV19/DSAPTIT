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
void preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<root->val<<' ';
		preorder(root->left);
		preorder(root->right);
	}
}
int res=0;
node *build(vector<int> &v,int l, int r)
{
	if(l>r)
		return NULL;
	int mid=l+(r-l)/2;
	node *root=new node(v[mid]);
	root->left=build(v,l,mid-1);
	root->right=build(v,mid+1,r);
	return root;
}
void timla(node *root)
{
	if(root==NULL)
		return;
	if(root->left==NULL&&root->right==NULL)
		++res;
	timla(root->left);
	timla(root->right);
}
void testcase()
{
	res=0;
	int n,x;
	cin>>n;
	node* root=NULL;
	vector <int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	root=build(v,0,n-1);
	timla(root);
	cout<<res<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}