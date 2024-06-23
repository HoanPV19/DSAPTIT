#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
        return a.first<b.first;
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    string s;
    pair <int,int> p1,p2;
    set <pair<int,int>> se;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        getline(cin,s);
        string tmp;
        stringstream ss(s);
        while(ss>>tmp)
        {
            p1.first=p2.second=i;
            p1.second=p2.first=stoi(tmp);
            if(se.find(p1)==se.end()&&se.find(p2)==se.end())
                se.insert(p1);
        }
    }
    for(auto x:se)
    {
        cout<<x.first<<" "<<x.second<<'\n';
    }
}