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
        int n = 0 ; cin >> n;
        vi a (n);
        int count = 0; int o = 0 , e = 0 , oo = 0 , ee =0;
        for(int i = 0 ; i < n ; i++) {
            cin >>a[i]; if (i%2 != a[i] %2) {count++;} 
            if (a[i] % 2 == 0) {e++;} else {o++;}
            if (i % 2 == 0) {ee++;} else {oo++;}
        }
        if (oo != o || ee != e) {cout << -1 << endl; continue;}
        if (count % 2 == 0) {cout << count  /2 << endl; continue;}
        if (count > 1 || count == 0) {
            cout << count-1 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
  

  return 0;
}   