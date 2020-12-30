#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      long long n =0;
      cin >> n;
      int q = floor(sqrt(n));
      if ( n == 1 ) {cout << 0 << "\n"; continue;}
      if (n %q == 0) {cout << (q-2) + (n/q) << "\n"; continue;}
      cout << (q-1) + (n/q) << "\n";
  }
  
  

  return 0;
}