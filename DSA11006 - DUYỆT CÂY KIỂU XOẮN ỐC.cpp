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
		left=NULL;
		right=NULL;
	}
};
void insert(node *root, int u, int v, char c)
{
	if(root!=NULL)
    {
        if(root->val==u)
        {
            if(c=='L')
                root->left=new node(v);
            else
                root->right=new node(v);
            return;
        }
        else
        {
            insert(root->left,u,v,c);
            insert(root->right,u,v,c);
        }
    }
}
vector <int> d[1005];
int dd=0;
void muc(node *root,int depth)
{
    if(root!=NULL)
    {
        dd=max(dd,depth);
        muc(root->left,depth+1);
        d[depth].push_back(root->val);
        muc(root->right,depth+1);
    }
}
void testcase()
{
	int n,u,v;
    char c;
    dd=0;
	cin>>n;
    for(int i=0;i<=n;i++)
        d[i].clear();
    node *root=NULL;
	while(n--)
    {
        cin>>u>>v>>c;
        if(root==NULL)
            root=new node(u);
        insert(root,u,v,c);
    }
    muc(root,0);
    for(int i=0;i<=dd;i++)
    {
        if(i%2==1)
        {
            for(auto x:d[i])
                cout<<x<<' ';
        }
        else
        {
            for(int j=d[i].size()-1;j>=0;j--)
                cout<<d[i][j]<<' ';
        }
    }
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