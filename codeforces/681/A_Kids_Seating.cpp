#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n; cin >>n;
    for (int i = 2*n; i < 4*n; i+=2) {
        cout << i << " ";
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