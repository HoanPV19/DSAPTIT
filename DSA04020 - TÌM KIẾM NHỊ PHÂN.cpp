#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
void bs(int l, int r, int *a, int x)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        {
            cout<<mid+1<<'\n';
            return;
        }
        else if(a[mid]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<"NO\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,n;
       cin>>n>>x;
       int a[n+1];
       for(int i=0;i<n;i++)
            cin>>a[i];
       bs(0,n-1,a,x);
    }
    return 0;
}