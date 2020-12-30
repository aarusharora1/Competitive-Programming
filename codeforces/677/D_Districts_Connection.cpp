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
      int n;
      cin >> n;
      vi a(n);
      vi freq(5000);
      for (int i = 0 ; i < n ; i++) {
          cin >> a[i]; freq[a[i]]++;
      }
      if (*max_element(freq.begin(),freq.end()) == n) {cout << -1 << "\n";continue;}
        
  }
  
  

  return 0;
}