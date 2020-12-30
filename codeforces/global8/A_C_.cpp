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
        ll a = 0 , b = 0 , n = 0;
        cin >> a >> b >> n;
        ll ans = 0;
        while ( a <= n && b <= n) {
            if (a > b) {b+=a;}
            else {a+=b;} ans++;
        }
        cout << ans << endl;
    }
  

  return 0;
}