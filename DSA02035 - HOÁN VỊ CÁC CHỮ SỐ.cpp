#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9 +7;
string s;
int gt(int k)
{
    int g=1;
    for(int i=2;i<=k;i++)
        g*=i;
    return g;
}
void testcase(int n, int k)
{
    vector <string> v(n);
    vector <int> idx(k);
    for(int i=0;i<k;i++)
        idx[i]=i;
    for(int i=0;i<n;i++)
        cin>>v[i];
    int kq=1e9;
    for(int i=0;i<gt(k);i++)
    {
        vector<int> so;
        next_permutation(idx.begin(),idx.end());
        for(int j=0;j<n;j++)
        {
            string tmp="";
            for(int l=0;l<k;l++)
            {
                tmp+=v[j][idx[l]];
            }
             so.push_back(stoi(tmp));
        }
        sort(so.begin(),so.end());
        kq=min(kq,so.back()-so[0]);
    }
    cout<<kq<<'\n';
}
int main() {
//    int t;
//    cin>>t;
//    while(t--)
//    {
//         int n, k;
        int n, k;
        cin>>n>>k;
        testcase(n,k);
}