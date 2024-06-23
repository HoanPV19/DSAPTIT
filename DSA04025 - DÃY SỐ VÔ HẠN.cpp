#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX = 1e9 + 7;
class matrix {
public:
    ll a[2][2] = {{1, 1}, {1, 0}};
    matrix operator*(const matrix &B) {
        matrix C;
        memset(C.a, 0, sizeof(C.a));
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    C.a[i][j] = (C.a[i][j] + (a[i][k] * B.a[k][j]) % MAX) % MAX;
                }
            }
        }
        return C;
    }
};
matrix mpow(ll n) {
    matrix k;
    if (n == 1)
        return k;
    matrix tmp = mpow(n / 2);
    if (n % 2)
        return tmp * tmp * k;
    else
        return tmp * tmp;
}
void tc() {
    ll n;
    cin >> n;
    if(n==0)
    {
        cout<<"0\n";
        return;
    }
    matrix a = mpow(n);
    cout << a.a[1][0] << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        tc();
    }
    return 0;
}