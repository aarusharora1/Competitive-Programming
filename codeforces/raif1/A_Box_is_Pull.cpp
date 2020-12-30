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
      int x1 , y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;
      int ans = abs(x2-x1) + abs(y2-y1);
      if (x1 != x2 && y2 != y1) {ans+=2;}

      cout << ans  << "\n";
  }
  
  

  return 0;
}