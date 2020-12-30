#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
#define ll long long
int main() {
  int t;
  cin >> t;
    while (t--) {
        int n = 0 , k = 0 ;
        cin >> n >>k;
        string s ;
        cin >> s;
        ll ans  =  0 , last = k;
        for (int i = 0 ; i < n ; i ++) {
          if (s[i] == '0') {last++;}
          else {ans+= last/k ; last=0;}
        }
        cout << ans << endl;
    }

  

  return 0;
}