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
      int ans = 10 * ((n-1) % 10);
        int b = log10(n) + 1;
        while(b>0) {ans+=b;b--;}
        cout << ans << "\n";
  }
  
  

  return 0;
}