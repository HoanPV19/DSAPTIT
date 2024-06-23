#include <bits/stdc++.h>
#define ll long long
#define MAX 100
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int kq=n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int j=n/2;
        int i=0;
        while(i<j&&j<n)
        {
            if(a[j]>=a[i]*2)
            {
                --kq;
                ++i;
                ++j;
            }
            else
                ++j;
        }
        cout<<kq<<'\n';
    }
}