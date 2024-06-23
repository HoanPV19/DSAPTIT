#include<iostream>
#include<algorithm>
#include <vector>
#define ll long long
#define MAX 100
using namespace std;
int lower(int l, int r, vector<int> &v,int x)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]>=x)
            r=mid-1;
        else
            l=mid+1;
    }
return l;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector <int> v;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll kq=0;
        for(int i=0;i<n;i++)
        {
           kq+=lower(i,n-1,v,v[i]+k)-i-1;
        }
        cout<<kq<<'\n';
    }
}