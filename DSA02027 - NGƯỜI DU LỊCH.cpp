#include <bits/stdc++.h>
using namespace std;
int n;
bool visited[100];
int a[100][100];
int cnt=0, kq=1e9, ans=0;
void Try(int i,int cnt)
{
    visited[i]=true;
    if(cnt==n-1)
        visited[1]=false;
    else
        visited[1]=true;
    if(cnt==n)
    {
        kq=min(kq,ans);
        return;
    }
    for(int j=1;j<=n;j++)
    {
        if(!visited[j]&&i!=j)
        {
            ans+=a[i][j];
            if(ans<kq)
            {
                Try(j,cnt+1);
                visited[j]=false;
            }   
            ans-=a[i][j];
        }
    }
}
int main() {
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        visited[i]=false;
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    Try(1,0);
    cout<<kq<<'\n';
}