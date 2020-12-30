#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>

int main() {

	
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		vector<int> p(n);
		for (int i = 0; i < m; ++i) {
			int pos;
			cin >> pos;
			p[pos - 1] = 1;
		}
		for (int i = 0; i < n; ++i) {
			if (p[i] == 0) continue;
			int j = i;
			while (j < n && p[j]) ++j;
			sort(a.begin() + i, a.begin() + j + 1);
			i = j;
		}
		bool ok = true;
		for (int i = 0; i < n - 1; ++i) {
			ok &= a[i] <= a[i + 1];
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}