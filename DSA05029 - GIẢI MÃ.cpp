#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1000005;
const ll mod= 1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        if(s[0]=='0')
        {
            cout<<"0\n";
            continue;
        }
        ll dp[s.size()+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=s.size();i++)
        {
             if(s[i-1]!='0')
            dp[i]=dp[i-1];
            int k=stoi(s.substr(i-2,2));
            if(k<=26&&k>=10)
                dp[i]+=dp[i-2];
        }
        cout<<dp[s.size()]<<'\n';
    }
}