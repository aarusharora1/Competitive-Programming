#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n ; cin >> n;
    vector<string> a (n);
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (a[i][j] == '1' && a[i+1][j] == '0' && a[i][j+1] == '0') {cout << "NO\n";return;}
        }
    }
    cout << "YES\n"; return;
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  
  

  return 0;
}