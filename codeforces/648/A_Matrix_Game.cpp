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
        int n = 0 , m = 0;
        cin >> n >> m;
        int q ;
        vi n2 , m2;
        n2.resize(n); m2.resize(m);
        for (int nn = 0 ; nn < n; nn++) {
            bool here = false;
            for (int i = 0 ; i <  m ; i++) {
                cin >> q; if (q == 1) {
                    if (m2[i] <m) {m2[i]++;}
                     here = true;
                }
            }
            if (here) {n2[nn]++;}
            
        }
        //cout << " N2 : " << n2 << " M2 : " << m2 << endl;
        int n22 = 0; int m22 = 0;
        for (int  i = 0 ;i  < n ; i++) {
            if (n2[i] == 0) {n22++;}
        }
        for (int i = 0 ; i < m ; i++) {
            if (m2[i] == 0) {m22++;}
        }
        q = min(n22,m22);
        if (q%2) {cout << "Ashish" << endl;}
        else {cout << "Vivek" <<endl;}
    }
  

  return 0;
}