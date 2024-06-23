#include <bits/stdc++.h>
#define ll long long
using namespace std;
void move(int n, char A, char B, char C)
{
    if(n==1)
    {
        cout<<A<<" -> "<<B<<'\n';
        return;
    }
    else
    {
        move(n-1,A, C, B);
        move(1,A, B, C);
        move(n-1, C, B, A);
    }
}
int main() {
    int n;
    cin>>n;
    move(n, 'A', 'C', 'B');
}