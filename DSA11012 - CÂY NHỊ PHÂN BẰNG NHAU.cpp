#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
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
        insert(root->left,u,v,c);
        insert(root->right,u,v,c);
    }
}
bool check=true;
void cmp(node* root1,node *root2)
{
    if(root1==NULL&&root2==NULL)
    {
        return;
    }
    if(root1->val!=root2->val)
    {
        check=false;
        return;
    }
    cmp(root1->left,root2->left);
    cmp(root1->right,root2->right);
}
void testcase()
{
    check=true;
    int n,u,v;
    char c;
    cin>>n;
    node *root1=NULL, *root2=NULL;
    while(n--)
    {
        cin>>u>>v>>c;
        if(root1==NULL)
            root1=new node(u);
        insert(root1,u,v,c);
    }
    cin>>n;
    while(n--)
    {
        cin>>u>>v>>c;
        if(root2==NULL)
            root2=new node(u);
        insert(root2,u,v,c);
    }
    cmp(root1,root2);
    if(check)
        cout<<"1\n";
    else
        cout<<"0\n";
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
        testcase();
    return 0;
}