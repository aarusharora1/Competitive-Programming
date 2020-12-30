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
        long long n; cin >> n;
        long long m = log2(n);
        //cout << "M : " << m << endl;
        long long ans=0;
        for (long long i = 1 ; i < m+100 ; i++) {
            
            long long n2 = (n + (pow(2,i-1))) / pow(2,i);
            ans += (n2 * i) ;
            //cout << " N2:  " << n2 << "  I : " <<  i << endl;
        }
        cout << ans << endl;
    }
  

  return 0;
}