#include<bits/stdc++.h>
using namespace std;
int main(){
	set<long long> se;
	vector<long long> v;
	se.insert(1);
	while(1){
		for(auto x:se){
			if(x > 1e18){
				break;
			}
			v.push_back(x*2);
			v.push_back(x*3);
			v.push_back(x*5);
		}
		for(auto i:v){
			se.insert(i);
	    }
	    if(se.size()>1e4){
	    	break;
		}
    	v.clear();
	}
	v.clear();
	for(auto i:se){
		v.push_back(i);
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
}