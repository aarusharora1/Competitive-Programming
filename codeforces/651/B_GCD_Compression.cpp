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
        int n  = 0 ;
        cin >> n;
        vi nums (2*n);
        int e = 0 , o  = 0 ;
        fori(0,2*n,1) {cin >> nums[q]; if (nums[q] % 2 ==0) {e++;} else {o++;}}
        if (e % 2 == 0) {
            int a = 0, b = 0; bool done  = false;
            for (int i = 0 ; i < 2 * n ; i++) {
                if (nums[i] % 2 == 1) {
                    if (done ) {b = i;break; }
                    else {a=i; done= true;}
                }
            }
         //  cout << " A: " << a << " B:L " << b << endl;
            int lasto  = 0 , laste = 0;
            bool ee=false, oo=false;
            for (int i = 0 ; i <2* n ; i ++) {
                if ( i  == a || i == b ) {continue;}
                if (nums[i]  % 2 == 0) {
                    if (ee) {
                        cout << laste +1<< " " << i+1 << endl; ee = false;
                    }
                    else {
                        laste = i ; ee = true;
                    }
                }
                else {
                    if (oo) {
                        cout << lasto+1 << " " << i+1 << endl; oo = false;
                    }
                    else {
                        lasto = i ; oo = true;
                    }
                }
            }
        }
        else {
            int a = 0, b = 0; bool aa  , bb;
            for (int i = 0 ; i < 2 * n ; i++) {
                if (nums[i] % 2 ==0 && !bb) {b = i;bb=true;}
                if (nums[i] % 2 == 1 && !aa) {a=i;aa=true;}
            }
                       // cout << " A: " << a << " B:L " << b << endl;

            int lasto  = 0 , laste = 0;
            bool ee =false, oo=false;
            for (int i = 0 ; i <2* n ; i ++) {
                //cout <<  " I : " << i << " EE: " << ee << " OO: " << oo << " laste "  << laste << " lastor " << lasto << endl;
                if ( i  == a || i == b ) {continue;}
                if (nums[i]  % 2 == 0) {
                    if (ee) {
                        cout << laste+1 << " " << i+1 << endl; ee = false;
                    }
                    else {
                        laste = i ; ee = true;
                    }
                }
                else {
                    if (oo) {
                        cout << lasto+1 << " " << i+1 << endl; oo = false;
                    }
                    else {
                        lasto = i ; oo = true;
                    }
                }
            }

        }

    }
  

  return 0;
}