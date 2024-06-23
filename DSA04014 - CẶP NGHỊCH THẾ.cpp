#include <bits/stdc++.h>
#define ll long long
#define MAX 100
using namespace std;
int n;
ll res=0;
ll a[1000005];
void merge(int l, int r)
{
    int mid=l+(r-l)/2;
    vector <ll> x,y;
    for(int i=l;i<=mid;i++)
        x.push_back(a[i]);
    for(int i=mid+1;i<=r;i++)
        y.push_back(a[i]);
      int i=0, j=0, k=l;
    while(i<x.size()&&j<y.size())
    {
        if(x[i]<=y[j])
            a[k++]=x[i++];
        else
        {
            a[k++]=y[j++];
            res+=x.size()-i;
        }
    }
    while(i<x.size())
        a[k++]=x[i++];
    while(j<y.size())
        a[k++]=y[j++];
}
void msort(int l,int r)
{
    if(l>=r)
        return;
    int mid=l+(r-l)/2;
    msort(l,mid);
    msort(mid+1,r);
    merge(l,r);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        res=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        msort(0,n-1);
        cout<<res<<'\n';
    }
}