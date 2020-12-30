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
  ll t;
  cin >> t;
    for (ll q =1 ; q <= t ; q++) {
        ll n = 0 ; cin >>n ;
        vector<ll> a(n);
        for (int i = 0 ; i < n ; i++) {cin >> a[i];}
        ll inc = 0 , dec = 0 , ans = 0;
        for (ll i = 0 ; i < n-1 ; i++) {
            if (a[i] < a[i+1]) {
                inc++; dec=0;if (inc > 4) {inc=0;ans++;}
            }
            else if (a[i] > a[i+1]) {
                dec++;inc=0; if (dec> 4) {dec=0; ans++;}
            }
            
        }
        if (n <5) {cout << "Case #" << q << ": "<< 0 << endl;continue;}
        if (a[n-2] < a[n-1]) {inc++; if (inc>4){ans++;}}
        if (a[n-2] > a[n-1]) {dec++; if (dec>4) {ans++;}}
        cout << "Case #" << q << ": " << ans << endl;
    }
  return 0;
}