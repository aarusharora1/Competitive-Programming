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
  int n,m,k;
    while (t--) {
        cin >> n >> m >> k;
        if(n/k >= m) {cout << m << endl;continue;}
        int q = n / k ;
        int l = (m-q) % (k-1); if (l > 0 ) {l=1;}
        cout << (q - ((m-q) / (k-1) + l)) << endl;
    }
  

  return 0;
}