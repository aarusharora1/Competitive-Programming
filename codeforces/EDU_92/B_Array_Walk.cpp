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
        int n = 0 , k = 0 , z = 0;
        cin >> n >> k >> z;
        int m1 = 0  ,m2 = 0;
        vi a (n);
        for (int i = 0 ; i <n ; i++) {
            cin >> a[i];
        }
        for (int q = 1 ; q <= k ; q++) {
            if (a[q] + a[q-1] > m1) {m1=a[q]+a[q-1]; m2  = q-1;}
        }
        int ans = 0;
        for (int i = 0 ; i < m2; i ++) {
            ans+= a[i];k--;
        }
        //cout << " ANS 1 : " << ans << " K: " << k<< endl;
        int index = m2;
        while (z > 0 && k > 0) {
            
            ans+=a[index];
            if (index == m2) {index ++;}
            else {index--;z--;}
            k--;

        }
        //cout << " ANS:2 " << ans << endl;
        while (k >= 0) {
            ans += a[index];index++;
            k--;
        }
        cout << ans << endl;



    }
  

  return 0;
}