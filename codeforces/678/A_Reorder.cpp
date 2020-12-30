#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      int n, m; cin >> n >> m;
      int s = 0;
      for (int i = 0 ; i < n ; i++) {
          int q; cin >> q; s+=q;
      }
      if (s == m) {cout << "YES\n";}
      else {cout << "NO\n";}
  }
  
  

  return 0;
}