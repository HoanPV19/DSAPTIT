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
int cmp(int a[], int b[], int n)
{
	for(int i=0;i<n;i++)
		if(a[i]!=b[i])
			return 0;
	return 1;
}
void testcase()
{
	int n;
	cin>>n;
	int a[n], b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	cout<<cmp(a,b,n)<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		testcase();
}