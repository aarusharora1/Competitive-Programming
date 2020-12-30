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
        int n = 0  , m = 0; cin >> n >> m;
        vi a (n); vi b (m);
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        for (int i = 0 ; i < m ; i++) {
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ans  = 0;
        int a1 = 0, b1 =0;
        while (a1 < n && b1 < m) {
            //cout << " A: " << a[a1] << endl;
            if (a[a1] == b[b1]) {ans = a[a1]; break;}
            if (a[a1] > b[b1]) {b1++;}
            if (a[a1] < b[b1]) {a1++;}
        }
        if (ans == 0) {cout << "NO\n";  }
        else {cout << "YES\n1 " << ans << endl;}
    }
  

  return 0;
}