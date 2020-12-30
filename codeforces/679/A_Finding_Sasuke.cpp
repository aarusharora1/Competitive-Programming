#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n; cin >>n;
    vi a(n);
    for (int i = 0 ; i <n ; i++) {
        cin >> a[i];
    }
    for (int i = 0 ; i < n ; i+=2) {
        cout << -1 * a[i+1] << " " << a[i] << " ";
    }
    cout << "\n";
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  
  

  return 0;
}