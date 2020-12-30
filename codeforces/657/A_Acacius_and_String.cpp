#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string aba = "abacaba", ans;
    for (int i = 0; i+(int)aba.size() <= n; i++) {
      string g;
      for (int j = 0; j < n; j++) {
	if (s[j] == '?') {
	  g += (j >= i && j < i+(int)aba.size() ? aba[j-i] : 'z');
	} else
	  g += s[j];
      }
      int cnt = 0;
      for (int j = 0; j+(int)aba.size() <= n; j++) {
	cnt += (g.substr(j, aba.size()) == aba);
      }
      if (cnt == 1)
	ans = g;
    }
    if (ans.empty()) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
      cout << ans << endl;
    }
  }
}