#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node
{
	string val;
	node *left, *right;
	node (string s)
	{
		val=s;
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
bool so(string s)
{
	if(isdigit(s[0])||(s[0]=='-'&&s.size()>1))
		return true;
	return false;
}
ll kq(node *root)
{
	if(root!=NULL)
	{
		if(so(root->val))
			return stoll(root->val);
		else
		{
			string s=root->val;
			if(s=="+")
			{
				return kq(root->left)+kq(root->right);
			}
			else if(s=="-")
			{
				return kq(root->left)-kq(root->right);
			}
			else if(s=="*")
			{
				return kq(root->left)*kq(root->right);
			}
			else 
			{
				return kq(root->left)/kq(root->right);
			}
		}
	}
	return 0;
}
void testcase()
{
	int n;
	cin>>n;
	string s;
	queue <node *> q;
	cin>>s;
	node *root=new node(s);
	q.push(root);
	for(int i=1;i<=n/2;i++)
	{
		string a,b;
		cin>>a>>b;
		node *na=new node(a);
		node *nb=new node(b);
		insert(q.front(),na,nb);
		q.pop();
		q.push(na);
		q.push(nb);
	}
	cout<<kq(root)<<'\n';
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