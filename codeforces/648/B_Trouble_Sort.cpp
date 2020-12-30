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
        int n = 0; cin>>n;
        vi a ,b;
        int Q; 
        for (int i = 0 ; i< n ; i++) {
            cin >> Q ; a.push_back(Q);
        }
        int c0  = 0 , c1 = 0;
        for (int  i = 0 ; i < n ; i++) {
            cin >> Q ; b.push_back(Q);
            if (Q==0) {c0++;} else {c1++;}
        }
        if (c1>0 && c0 > 0) {
            cout << "Yes" << endl ; continue;
        }
        vi a2 = a;
        sort(a2.begin(),a2.end());
        bool good = true;
        for (int i = 0 ; i < n ; i++) {
            //cout << " A: " << a[i] << " A@:  " << a2[i] << endl;
            if (a2[i] != a[i]) {
                good=false; break;
            }
        }
        if (good) {cout << "Yes" << endl; continue;}
        else {cout << "No" << endl; continue;}
    }
  

  return 0;
}