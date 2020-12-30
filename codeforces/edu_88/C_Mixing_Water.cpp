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
        int c,h,tt;
        cin >> h >> c >> tt;
        if (h==tt) {cout << 1;continue;}
        if (h+c == tt*2) {cout << 2;continue;}
        int q = tt- ((h+c ) /2 );
        double avg = 0;
        int ans = 0;
        while (abs(tt-avg) > 0.5) {
            if (ans%2) {avg *= ans; avg+= h ; ans++;avg/=ans;}
            else {avg *= ans; avg+= c ; ans++;avg/=ans;}
            

        }
        cout << ans << endl;
    }
  

  return 0;
}