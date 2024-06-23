#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX = 1e9 + 7;
ll n,mu;
class matrix {
public:
    ll a[11][11];
    void input()
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
    }
    matrix operator*(const matrix &B) {
        matrix C;
        memset(C.a, 0, sizeof(C.a));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    C.a[i][j] = (C.a[i][j] + (a[i][k] * B.a[k][j]) % MAX) % MAX;
                }
            }
        }
        return C;
    }
};
matrix k;
matrix mpow(ll n) {
    if (n == 1)
        return k;
    matrix tmp = mpow(n / 2);
    if (n % 2)
        return tmp * tmp * k;
    else
        return tmp * tmp;
}
void tc() {
    cin>>n>>mu;
    k.input();
    matrix a = mpow(mu);
    ll res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a.a[i][j]<<" ";
        cout<<'\n';
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        tc();
    }
    return 0;
}