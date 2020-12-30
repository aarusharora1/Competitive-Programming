#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n , k;
    cin >> n >> k;
    if (k >= n) {cout << "1\n"; return;}
    int ans = n;
    for (int j = 2; j * j < n; j++) {
        if (n%j == 0 ) {

            if (n/j<=k){ans = min(ans, n/j);}
            if (j <= k) {ans = min(ans,j);}
        }
    }
    cout << min(n,ans) << "\n";
    
    return;
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  
  

  return 0;
}