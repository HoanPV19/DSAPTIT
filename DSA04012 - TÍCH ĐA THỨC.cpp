#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=1005;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector <int> a(n), b(m);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        vector <int> c(n+m-1,0);
        for(int i=0;i<n;i++)
        {
            int k=i;
            for(int j=0;j<m;j++)
                c[k++]+=a[i]*b[j];
        }
        for(auto k:c)
            cout<<k<<" ";
        cout<<'\n';
    }
}