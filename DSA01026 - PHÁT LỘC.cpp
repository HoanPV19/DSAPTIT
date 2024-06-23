#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int n;
string s = "8";
bool check(string s) {
    if (s[0] != '8' || s[n-1]!='6')
        return false;
    for (int i = 0; i < n - 1; i++)
        if (s[i] == '8' && s[i + 1] == '8')
            return false;
    for (int i = 0; i < n - 3; i++)
        if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6' && s[i + 3] == '6')
            return false;
    return true;
}
void ql(string s, char c) {
    s+=c;
    if (s.size()== n) {
        if (check(s))
            cout << s << '\n';
        return;
    }
    ql(s,'6');
    ql(s,'8');
}
int main() {
    cin >> n;
    ql("",'8');
    return 0;
}