#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int a[105];
int n;
int sum=0;
int check=0;
void Try(int i, int SUM)
{
    if(check||SUM>sum/2)
        return;
    if(SUM==sum/2)
    {
        check=1;
        return;
    }
    for(int j=i;j<n;j++)
    {
        Try(j+1,SUM+a[j]);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        check=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2)
        {
            cout<<"NO\n";
            continue;
        }
        sort(a,a+n);
        Try(0,0)   ;     
        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}