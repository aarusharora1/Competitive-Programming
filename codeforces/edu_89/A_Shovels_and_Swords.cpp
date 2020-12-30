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
        ll a = 0 , b = 0;
        cin >> a >>b;

        ll ans = 0;
        if (a*2 < b){ cout << a << endl ; continue;}
        if (b*2 < a) {cout << b << endl; continue;}
        /*
        if (a > b) {
            ll a1 = a -b;
            if (a1 % 2 == 0 && b>=a1/2) {
                ans+= a1/2; a-= a1 ; b-= a1/2;
            }
            else if (a1 % 2 == 1 && b >= a1/2) {
                ans += a1/2; a-= a1 - 1 ; b-= a1/2;
            }
        }
        if (b > a) {
            ll a1 = b -a;
            if (a1 % 2 == 0 && a>=a1/2) {
                ans+= a1/2; b-= a1 ; a-= a1/2;
            }
            else if (a1 % 2 == 1 && a >= a1/2) {
                ans += a1/2;b-= a1 - 1 ; a-= a1/2;
            }
        }
        */
       while (abs(a-b) >= 1) {
           if (a > b) {
               ll a1 = a -b ;
               if (b >= a1 && a >= a1*2) {
                   a -= a1*2 ; b -= a1; ans += a1;
               }

           }
           else if (b> a) {
               ll a1 = b -a;
               if (a >= a1 && b >= a1 *2) {
                   b-= a1  * 2 ; a -= a1; ans+= a1;
               }
           }
       }
        ll a2 = a/3; ll a3=b/3;
        if (a2 == a3) {ans+= 2 * a2; a-= a2 *       3; b -= a3 * 3;}
        if (a == 2 && b == 1) {ans++;}
        if (a == 1 && b == 2) {ans++;}
        if (a == 2 && b == 2) {ans++;}

        cout << ans << endl;
    }
  

  return 0;
}