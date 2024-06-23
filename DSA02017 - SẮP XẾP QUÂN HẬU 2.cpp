#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool visited[9];
int diem[9][9];
bool X[20],Y[20];
int res=-1e9;
void nhap()
{
	for(int i=1;i<=8;i++)
		for(int j=1;j<=8;j++)
			cin>>diem[i][j];
}
void Try(int y,int sum)
{
	if(y==9)
	{
		res=max(res,sum);
		return;
	}
	for(int x=1;x<=8;x++)
	{
		if(!X[x+y-1]&&!Y[8+x-y]&&!visited[x])
		{
			X[x+y-1]=Y[8+x-y]=visited[x]=true;
			Try(y+1,sum+diem[y][x]);
			X[x+y-1]=Y[8+x-y]=visited[x]=false;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		res=-1e9;
		for(int i=1;i<=8;i++)
			Y[i]=X[i]=visited[i]=false;
		nhap();
		Try(1,0);
		cout<<res<<'\n';
	}
}