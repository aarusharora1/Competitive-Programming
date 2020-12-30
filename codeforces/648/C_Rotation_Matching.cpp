#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
int N  = 1e6;
int main() {
  //int t;
  //cin >> t;
    //while (t--) {
        vi a; a.resize(N);
        vi a2; a2.resize(N);
        int n = 0 , Q= 0;
        cin >> n;
        for (int i = 0 ; i < n ; i++) {
            cin >> Q; a[Q] = i; a2[Q] = i+n;
        }
        vi b ; b.resize(N);
        for (int i = 0 ; i < n ; i++) {
            cin >> Q; b[i-a[Q] + (5*1e5)]++;
            b[i-a2[Q] + (5*1e5)] ++;
           // cout << "   P    :  " <<  i << "   a[q} :  " << a[Q] << endl;
        }
        int max = 0, maxi = 0;
        for (int i = 0 ; i < N; i++) {
            if (b[i]>max) {maxi=i;max=b[i]; //cout <<" MM " <<  b[i] << endl;
            }
        }
        cout << max << endl;
    //}
  

  return 0;
}