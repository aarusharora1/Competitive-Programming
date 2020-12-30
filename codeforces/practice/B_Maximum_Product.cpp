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
      int n = 0;
      cin >> n;
      vector<int64_t> a(n);
      for (int i =0 ; i < n ; i++) {
          cin >> a[i];
      }
      sort(a.begin(),a.end());
      reverse(a.begin(),a.end());
        int64_t o = a[0] * a[1] * a[2] * a[3] * a[4];
      int64_t oo = a[0] * a[1] * a[2] * a[n-1] * a[n-2];
      int64_t ooo = a[0] * a[n-1] * a[n-2] * a[n-3] * a[n-4];
      cout << max(o,max(oo,ooo)) << "\n";
      
  }
  
  

  return 0;
}