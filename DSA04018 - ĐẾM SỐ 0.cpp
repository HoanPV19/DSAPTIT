#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
int n;
int bs(int l, int r, int *a)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==0)
        {
            l=mid+1;
        }
        else 
        {
            if(a[mid-1]==0)
                return mid;
            r=mid-1;
        }
    }
    return l;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
       cin>>n;
       int a[n+1];
       for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<bs(0,n-1,a)<<'\n';
    }
    return 0;
}