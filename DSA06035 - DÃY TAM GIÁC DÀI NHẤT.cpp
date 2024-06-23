#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int a[100005];
int n;
int tangmax()
{
    int MAX=0;
    int tmp=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]>a[i-1])
            ++tmp;
        else
            tmp=1;
        MAX=max(MAX,tmp);
    }
    return MAX;
}
int giammax()
{
    int MAX=0;
    int tmp=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]<a[i-1])
            ++tmp;
        else
            tmp=1;
        MAX=max(MAX,tmp);
    }
    return MAX;
}
int tangiac(int k)
{
    int l=k, r=k;
    int kq=3;
    int MAX=1;
    while(l>=2)
    {
        if(a[l-1]<a[l])
        {
            --l;
            MAX++;
            kq=max(kq,MAX);
        }
        else
            break;
    }
     while(r<n)
    {
        if(a[r]>a[r+1])
        {
            ++r;
            MAX++;
            kq=max(kq,MAX);
        }
        else
            break;
    }
    return kq;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int tg=0;
        for(int i=2;i<=n-1;i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                tg=max(tg,tangiac(i));
        }
        tg=max({tg,tangmax(),giammax()});
        cout<<tg<<'\n';
    }
}