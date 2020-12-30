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
    while (t--) {
        ll n = 0; cin >>n;
        vector<ll> a (n);
        for (ll i = 0 ; i< n ; i++) {
            cin >>a[i];
        }
        if (n == 1) {cout << 0 << endl;continue;}
        if (n == 2) {cout << 0 << endl; continue;}
        vector<ll> seg (n+1);
        for (ll i = 1 ; i< n ; i++) {
            if (a[i] < a[i-1]) {seg[i] = -1;}
            else if (a[i] > a[i-1]) {seg[i] = 1;}
            else {seg[i] = 0;}
        }
        if (seg[n-1] == 1) {
            int i = n-1;
            while (i >= 0 && (seg[i] == 1 || seg[i] == 0)) {i--;}
            cout << max(0,i) << endl; continue;
        }
    //a
        if (seg[n-1] == -1) {
            int i = n-1;
            while ( i >= 0 &&(seg[i] == 0 ||seg[i] == -1)) {i--;}
            while (i >= 0 && (seg[i] == 1 || seg[i] == 0)) {i--;}
            cout << max(0,i) << endl; continue;
        }
        //for (auto i : seg) {cout << i << " ";}
        int last = -1;
        int last2 = -1;
        seg[0]=seg[1];
        for (int i =1; i< n ; i++) {
            if (seg[i] != seg[i-1] && seg[i] != 0 && seg[i-1] != 0) {
                last2 = last;
                last = i;
            }
        }
        if (last2== -1 && seg[0] == -1) {last2 = last;}
        cout << max(0,last2-1) << endl;
    }
  

  return 0;
}