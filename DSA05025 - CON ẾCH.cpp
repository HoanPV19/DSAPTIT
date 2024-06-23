#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1005;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin>>n;
        ll a[55];
        a[0]=1;
        for(int i=1;i<=n;i++)
        {
            a[i]=0;
            for(int j=1;j<=3;j++)
            {
                if(i-j>=0)
                    a[i]+=a[i-j];
            }
        }
        cout<<a[n]<<'\n';
    }
}