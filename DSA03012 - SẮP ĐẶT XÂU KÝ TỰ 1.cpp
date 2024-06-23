#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int len=(int)s.size();
        map <char, int> mp;
        for(char x:s)
        	++mp[x];
		bool check=true;
		if(len%2)
        for(auto x:mp)
        {
        	if(x.second>len/2+1)
        	{
        		check=false;
        		break;
			}    		
		}
		else
		for(auto x:mp)
        {
        	if(x.second>len/2)
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