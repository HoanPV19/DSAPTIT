#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
ll MOD = 1e9 + 7;
struct node {
    int val;
    node *left, *right;
    node(int x) {
        val = x;
        left = right = NULL;
    }
};
unordered_map<int, node*> mp;
void insert(node *root, int u, int v, char c) {
            if (c == 'L')
            {
                mp[u]->left=new node(v);
                mp[v]= mp[u]->left;
            }
            else 
            {
                mp[u]->right=new node(v);
                mp[v]=mp[u]->right;
            }
        }
bool checkla(node *root) {
    return root!=NULL&& root->left == NULL && root->right == NULL;
}
int sumright(node *root) {
    if(root==NULL)
        return 0;
    if(checkla(root->right))
        return sumright(root->left) + root->right->val;
    else
        return sumright(root->left) + sumright(root->right);
}
void testcase() {
    mp.clear();
    int n, u, v;
    char c;
    cin >> n;
    node *root1 = NULL;
    while (n--) {
        cin >> u >> v >> c;
        if (root1 == NULL) {
            root1 = new node(u);
            mp[u]=root1;
        }
        insert(root1, u, v, c);
    }
    cout << sumright(root1) << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        testcase();
    }
    return 0;
}