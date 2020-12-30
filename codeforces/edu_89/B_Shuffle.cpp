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
        ll m = 0 , n = 0 , x = 0 ;
        cin >> n  >> x>> m;
        ll l = 0 , r = 0;
        ll rl = 0 , rr = 0;
        cin >> l >> r; m--;
        while (!( l <= x && r >= x) && m > 0)  {
            m--; cin >> l >> r;
        }
        if (m==0) {
            if (l <=x && r >= x) {cout << r - l +1 << endl; continue;}
            else {cout << 1 << endl; continue;}
        }
        rl = l ; rr = r;
        for (int i = 0 ; i < m ; i++) {
            cin >> l >> r ;
            if (l < rl && r >= rl) {rl = l;}
             if ( r > rr && l <= rr) {rr = r;}
        }
        //cout << "R: " << rr << "  L : " << rl << endl;
        cout << rr-rl + 1 << endl;
    }
  

  return 0;
}