#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
    	int d;
    	cin>>d;
        string s;
        cin>>s;
        int len=(int)s.size();
        map <char, int> mp;
        for(char x:s)
        	++mp[x];
		bool check=true;
		if(len%d)
        for(auto x:mp)
        {
        	if(x.second>len/d+1)
        	{
        		check=false;
        		break;
			}    		
		}
		else
		for(auto x:mp)
        {
        	if(x.second>len/d)
        	{
        		check=false;
        		break;
			}    		
		}
		if(check)
			cout<<"1\n";
		else
			cout<<"-1\n";
    }
    return 0;
}