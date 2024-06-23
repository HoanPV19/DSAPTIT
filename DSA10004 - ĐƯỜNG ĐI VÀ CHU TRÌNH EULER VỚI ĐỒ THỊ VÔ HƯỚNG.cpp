#include <bits/stdc++.h>
using namespace std;
#define ll long long
class graph
{
    public:
        int n, k, kq;
        vector <int> dsk[1005];
        void input()
        {
            cin>>n>>k;
            int x,y;
            for(int i=0;i<k;i++)
            {
                cin>>x>>y;
                dsk[x].push_back(y);
                dsk[y].push_back(x);
            }
            int c=0, l=0;
            for(int i=1;i<=n;i++)
            {
                if(dsk[i].size()==0)
                {
                    kq=0;
                    break;
                }
                if(dsk[i].size()%2==0)
                    ++c;
                else
                    ++l;
            }
            kq=0;
            if(c==n)
            {
                kq=2;
            }
            if(c==n-2)
                kq=1;             
            cout<<kq<<'\n';
        }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        graph gr;
        gr.input();
    }
}