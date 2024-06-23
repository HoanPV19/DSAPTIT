#include <bits/stdc++.h>
#define MAX 505
using namespace std;
int n,m;
int a[MAX][MAX];
int x[8]= {-1,-1,-1,0,1,1,1,0};
int y[8]= {-1,0,1,1,1,0,-1,-1};
void solve(int p,int q)
{
	a[p][q]=0;
	for(int i=0;i<8;i++)
	{
		int k=p+x[i], h=q+y[i];
		if(k<1||k>n||h<1||h>m)
			continue;
		if(a[k][h])
			solve(k,h);
	}
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin>>n>>m;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		int cnt=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				if(a[i][j])
				{
					++cnt;
					solve(i,j);
				}
			}
		cout<<cnt<<'\n';
    }
    return 0;
}