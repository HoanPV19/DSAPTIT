#include <bits/stdc++.h>
using namespace std;
int n,a[1000],check;
void khoitao() {
	check=1;
	for (int i=1; i<=n; i++) a[i]=n-i+1;
}
void sinh() {
	int i=n-1;
	while (i>=1 && a[i]<a[i+1]) {
		--i;
	}
	if (i==0) check=0;
	else {
		int j=n;
		while (a[i]<a[j]) --j;
		swap(a[j],a[i]);
		reverse(a+i+1,a+n+1);
	}
}
int main () {
	int t; cin >> t;
	while (t--)
	{
		cin >> n;
		khoitao();
		while (check) {
			for (int i=1; i<=n; i++) cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}