#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=505;
char a[MAX][MAX];
int n,m;
bool visited[MAX][MAX];
pair<int,int> s,t;
int dx[4]={0,-1,0,1};
int dy[4]={1,0,-1,0};
char dh[4]={'D','B','T','N'};
int check=0;
void input()
{
    cin>>n>>m;
    check=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            visited[i][j]=false;
            cin>>a[i][j];
            if(a[i][j]=='S')
                s={i,j};
            if(a[i][j]=='T')
                t={i,j};
        }
    }
}
void dfs(int i, int j, char h, int cnt)
{
    visited[i][j]=true;
    if(cnt>2||check)
        return;
    pair <int, int> d={i,j};
    if(d==t)
    {
        check=1;
        return;
    }
    for(int k=0;k<4;k++)
    {
        int x=i+dx[k], y=j+dy[k];
        char huong=dh[k];
        if(x>n||y>m||x<1||y<1||visited[x][y]||a[x][y]=='*')
            continue;
        if(huong==h||h=='0')
            dfs(x,y,huong,cnt);
        else
            dfs(x,y,huong,cnt+1);
         visited[x][y]=false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        input();
        dfs(s.first,s.second,'0',0);
        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}