#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n ;
      cin >> n;
      vi maxx;
      int mx = 0;
      vi a(n);
      for (int i = 0 ; i <n ; i++) {
          cin >> a[i]; mx = max(mx, a[i]);
      }
      for (int i = 0 ; i < n ; i++) {
          if (a[i] == mx) {maxx.push_back(i);}
      }
     // for (auto i : maxx) {cout << i << " "; }cout << "\n"; 
      if (maxx.size() == 1) {cout << maxx[0]+1<< "\n";return;}
      if (maxx.size() == n) {cout << "-1\n";return;}
      for (int i = 0; i < maxx.size()-1; i ++) {
          if ( maxx[i] - maxx[i+1]> 1) {cout << maxx[i]+1 << "\n"; return;}
      }
      for (int i = 1 ; i < maxx.size() ; i++) {
          if (maxx[i] - maxx[i-1] > 1) {cout << maxx[i]+1 << "\n"; return;}
      }
      if (maxx[maxx.size()-1] != n-1) {cout << maxx[maxx.size()-1]+1 << "\n"; return;}
      if (maxx[0] != 0) {cout << maxx[0]+1 <<"\n";return;}
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      solve();

  }
  
  

  return 0;
}