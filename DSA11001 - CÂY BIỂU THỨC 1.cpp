#include <bits/stdc++.h>
using namespace std;
struct node
{
	char val;
	node *left, *right;
	node (int c)
	{
		val=c;
		left=NULL;
		right=NULL;
	}
};
void insert(node *root, node *a, node* b)
{
	root->left=a;
	root->right=b;
}
int d=0;
void inorder(node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
		cout<<root->val;
	inorder(root->right);
}
void testcase()
{
	string s;
	cin>>s;
	stack<node *> q;
	for(int i=0;i<s.size();i++)
	{
		node* root=new node(s[i]);
		if(!isalpha(s[i]))
		{
			node *b=q.top();
			q.pop();
			node *a=q.top();
			q.pop();
			insert(root,a,b);
		}
		q.push(root);
	}
	inorder(q.top());
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