#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10005;
struct cay
{
    int s,t,day;
};
int r,c;
bool safe(int i,int j)
{
    if(i<1||j<1||i>r||j>c)
        return false;
    return true;
}
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
void testcase()
{
    cin>>r>>c;
    int a[r+1][c+1];
    queue<struct cay> q;
    struct cay x;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==2)
            {
                x.s=i, x.t=j,x.day=0;
                q.push(x);
            }
        }
    int res=0;
    while(!q.empty())
    {
        struct cay v=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int x=v.s+dx[i];
            int y=v.t+dy[i];
            if(safe(x,y)&&a[x][y]==1)
            {
                a[x][y]=2;
                struct cay tmp;
                tmp.s=x;
                tmp.t=y;
                tmp.day=v.day+1;
                res=max(res,tmp.day);
                q.push(tmp);
            }
        }
    }
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        {
            if(a[i][j]==1)
            {
                cout<<"-1\n";
                return;
            }
        }
    cout<<res<<'\n';
}
int main()
{
ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}