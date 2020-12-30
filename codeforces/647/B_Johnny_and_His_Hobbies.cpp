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
  int t , b;
  cin >> t;
    while (t--) {
        int n = 0; cin >> n;
        vi num; num.resize(n);
        fori(0,n,1) {cin >> b; num[q]=b;}      bool good = true;
        for (int i =1 ; i < 1025 ; i++ ) {
             good = true;  
            vi n2 ; n2.resize(n);
            for (int ii = 0 ; ii < n ; ii++) {
                n2[ii] = num[ii] ^ i;
            }
            sort(n2.begin(),n2.end());sort(num.begin(),num.end());
            for (int ii = 0 ; ii < n ; ii++) {
                //cout << " N2 : " << n2[ii] << " NUM : " << num[ii] <<  " I :  " << i << " II  : " << ii <<  endl;
                if ( n2[ii] != num[ii]) { good=false;break;}
            }
            if (good ) {cout << i << endl; break;}
        }
        if (!good) {cout << -1 << endl;}
    }
  

  return 0;
}