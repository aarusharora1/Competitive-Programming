#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  int t;
  cin >> t;
    while (t--) {
        ll l = 0 , m = 0 , r = 0;
        cin >> l >> r >> m;
        ll ans = 0;
        for (ll i = l ; i < r+r -l ; i++) {
            if (m % i ==0) {
                ans = i; break;
            }
        }
        ll q = ans - l , q2 = r - ans; 
        cout << ans << " " << r << " " << r-q << endl;

    }
  

  return 0;
}