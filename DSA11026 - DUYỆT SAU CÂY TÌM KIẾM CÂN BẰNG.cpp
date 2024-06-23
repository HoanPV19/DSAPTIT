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
node *build(vector <int> &a, int l, int r)
{
	if(l>r)
		return NULL;
	int mid=l+(r-l)/2;
	node *root=new node(a[mid]);
	root->left=build(a,l,mid-1);
	root->right=build(a,mid+1,r);
	return root;
}
void post(node *root)
{
	if(root==NULL)
		return;
	post(root->left);
	post(root->right);
	cout<<root->val<<' ';
}
void testcase()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	node *root=build(a,0,n-1);
	post(root);
	cout<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		testcase();
	}
}