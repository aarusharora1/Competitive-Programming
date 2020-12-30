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
        long double a = 0 , b = 0; 
        cin >> a >> b;
        if (a < b ) {
            int ans = 0;
            long double q = b / a;
            if (int(q) % 2 == 1) {cout << -1  << endl ; continue;}
            long double qq = log2(q);
            if (int(qq) == qq) {
                //cout <<" QQ:  " << qq << endl;
                while (qq >= 3) {
                    qq-=3; ans++;
                }
                while (qq >= 2) {
                    qq-=2; ans++;

                }
                while (qq >= 1 ) {
                    qq--; ans++;
                }
                cout <<  ans << endl;
            }
            else {
                cout << -1  << endl;
            }

            
        }
        else if (a==b ) {cout << 0 << endl ;continue;}        
        else {
            int ans= 0;
            long double q = a / b;
            if (int(q) % 2 == 1) {cout << -1  << endl ; continue;}
            long double qq = log2(q);
            if (int(qq) == qq) {
                //cout <<" QQ:  " <<  qq << endl;
                while (qq >= 3) {
                    qq-=3; ans++;
                }
                while (qq >= 2) {
                    qq-=2; ans++;

                }
                while (qq >= 1 ) {
                    qq--; ans++;
                }
                cout << ans << endl;
            }
            else {
                cout << -1 <<endl;
            }

        }

    }

  

  return 0;
}