#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
int main() {
  int t;
  cin >> t;
    while (t--) {
        int n =0, q=0; cin >> n;
        vi a, b;
        for (int i  =0 ; i < n ; i++) {
            cin >>q;
            a.push_back(q);
        }
        for (int i  =0 ; i < n ; i++) {
            cin >>q;
            b.push_back(q);
        }
        bool y = false;
        for (int k = 0 ; k < n /2  ; k++) {
            for (int i  = 0; i < k ; i++) {
                if (a[i] = b)
            }
        }
    }
  

  return 0;
}