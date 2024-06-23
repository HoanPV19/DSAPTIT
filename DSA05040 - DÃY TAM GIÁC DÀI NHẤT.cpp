#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=1;
		int ans=1;
		vector<int> dp(n,1);
		dp[0]=1;
		vector<int> Dp(n,1);
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				dem++;
				dp[i]=max(dp[i],dem);
			}
			else{
				dem=1;
			}
		}
		for(int i=n-1;i>=1;i--){
			if(a[i]<a[i-1]){
				ans++;
				Dp[i-1]=max(Dp[i-1],ans);
			}
			else{
				ans=1;
			}
		}
		int cnt=-1e9;
		for(int i=0;i<n;i++){
			cnt=max(cnt,dp[i]+Dp[i]-1);
		}
		cout<<cnt<<endl;
	}
}