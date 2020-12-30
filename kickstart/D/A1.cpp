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
    for (int  q = 1 ; q <= t ; q++) {
        int n = 0; cin >> n;
        vi a(n);  
        for (int i = 0 ; i< n ;i++) {
          cin >> a[i];

        }
        if (n == 1) {cout <<"Case #" << q << ": " <<  1 << endl; continue;}
        int max = 0, ans = 0;
        for (int i =0; i < n-1 ; i++) {
          if (a[i] > max && a[i] > a[i+1]) {ans +=1; max = a[i];}
          else if (a[i]>max){max=a[i];}
        }
        if (a[n-1] > max) {ans++;}
        cout << "Case #" << q << ": " << ans << endl;
    }
  

  return 0;
}